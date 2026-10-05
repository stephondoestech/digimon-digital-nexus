#include "global.h"
#include "bg.h"
#include "digimon_starters.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "pokemon.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "starter_choose.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "trainer_pokemon_sprites.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"

static EWRAM_DATA u8 sChoice = 0;
// All portraits are created once and only shown/hidden, so browsing never loads
// sprite graphics or palettes mid-frame (that caused flicker between choices).
static EWRAM_DATA u16 sPortraits[DIGIMON_STARTER_COUNT] = {0};
static EWRAM_DATA bool8 sConfirm = FALSE;
static EWRAM_DATA bool8 sClosing = FALSE;

static const struct BgTemplate sBg =
{
    .bg = 0, .charBaseIndex = 0, .mapBaseIndex = 31, .priority = 1,
};
static const struct WindowTemplate sWindows[] =
{
    { .bg = 0, .tilemapLeft = 0, .tilemapTop = 0, .width = 30,
      .height = 20, .paletteNum = 0, .baseBlock = 1 },
    DUMMY_WIN_TEMPLATE,
};
static const u16 sPalette[16] =
{
    RGB(2, 4, 8), RGB(3, 7, 11), RGB(28, 31, 31), RGB(8, 28, 26),
    RGB(10, 15, 20), RGB(22, 26, 29), RGB(4, 12, 16), RGB(24, 30, 23),
    RGB(31, 23, 6), RGB(1, 3, 5), RGB(15, 20, 22), RGB(3, 19, 21),
};
static const u8 sTextColors[] = {TEXT_COLOR_TRANSPARENT, 2, TEXT_COLOR_TRANSPARENT};
static const u8 sDarkTextColors[] = {TEXT_COLOR_TRANSPARENT, 9, TEXT_COLOR_TRANSPARENT};
static const u8 sTitle[] = _("DIGIVICE / PARTNER LINK");
static const u8 sChoose[] = _("Choose your Partner");
static const u8 sControls[] = _("UP/DOWN: Browse   A: Select");
static const u8 sConfirmControls[] = _("A: Link Partner   B: Back");
static const u8 sLink[] = _("LINK WITH ");
static const u8 sQuestion[] = _("?");

static void Print(u8 x, u8 y, const u8 *text, bool32 dark)
{
    AddTextPrinterParameterized3(0, FONT_SMALL, x, y,
        dark ? sDarkTextColors : sTextColors, TEXT_SKIP_DRAW, text);
}

static void Rect(u8 color, u16 x, u16 y, u16 width, u16 height)
{
    FillWindowPixelRect(0, PIXEL_FILL(color), x, y, width, height);
}

static void DrawScreen(bool32 browseOnly)
{
    u8 prompt[64];
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    Rect(6, 0, 0, 240, 20);
    Print(8, 2, sTitle, FALSE);

    // Native pixel UI: a Digivice shell, inset LCD, controls, and link lamp.
    Rect(9, 8, 29, 104, 110);
    Rect(4, 10, 25, 100, 110);
    Rect(5, 14, 29, 92, 102);
    Rect(4, 20, 35, 80, 72);
    Rect(7, 24, 39, 72, 64);
    Rect(9, 28, 115, 20, 6);
    Rect(9, 35, 108, 6, 20);
    Rect(11, 78, 111, 10, 10);
    Rect(8, 93, 117, 7, 7);
    Rect(3, 89, 29, 8, 3);
    Print(51, 106, Digimon_GetStarterAttribute(sChoice), TRUE);
    Print(51, 119, Digimon_GetStarterElement(sChoice), TRUE);

    Print(122, 21, sChoose, FALSE);
    for (u32 i = 0; i < DIGIMON_STARTER_COUNT; i++)
    {
        u8 y = 36 + i * 12;
        if (i == sChoice)
        {
            Rect(11, 120, y, 114, 12);
            Rect(3, 120, y, 3, 12);
        }
        Print(128, y - 1, GetSpeciesName(GetStarterPokemon(i)), FALSE);
    }
    Rect(6, 0, 141, 240, 19);
    if (sConfirm)
    {
        StringCopy(prompt, sLink);
        StringAppend(prompt, GetSpeciesName(GetStarterPokemon(sChoice)));
        StringAppend(prompt, sQuestion);
        Rect(6, 0, 20, 240, 15);
        Print(8, 20, prompt, FALSE);
    }
    Print(8, 144, sConfirm ? sConfirmControls : sControls, FALSE);
    if (browseOnly)
    {
        // Only the LCD labels and the partner list change while browsing.
        CopyWindowRectToVram(0, COPYWIN_GFX, 6, 4, 24, 13);
        return;
    }
    PutWindowTilemap(0);
    CopyWindowToVram(0, COPYWIN_FULL);
}

static void CreatePortraits(void)
{
    for (u32 i = 0; i < DIGIMON_STARTER_COUNT; i++)
    {
        // One OBJ palette slot each (8-15) so hidden portraits keep their colours.
        sPortraits[i] = CreateMonPicSprite(GetStarterPokemon(i), FALSE, 0, TRUE, 60, 71, 8 + i, TAG_NONE);
        if (sPortraits[i] != 0xFFFF)
            gSprites[sPortraits[i]].oam.priority = 0;
    }
}

static void ShowPortrait(void)
{
    for (u32 i = 0; i < DIGIMON_STARTER_COUNT; i++)
    {
        if (sPortraits[i] != 0xFFFF)
            gSprites[sPortraits[i]].invisible = (i != sChoice);
    }
}

static void DestroyPortraits(void)
{
    for (u32 i = 0; i < DIGIMON_STARTER_COUNT; i++)
    {
        if (sPortraits[i] != 0xFFFF)
            FreeAndDestroyMonPicSprite(sPortraits[i]);
        sPortraits[i] = 0xFFFF;
    }
}

static void Task_Choose(u8 taskId)
{
    if (gPaletteFade.active)
        return;
    if (sClosing)
    {
        gSpecialVar_Result = sChoice;
        DestroyPortraits();
        ResetAllPicSprites();
        FreeAllWindowBuffers();
        DestroyTask(taskId);
        SetMainCallback2(gMain.savedCallback);
        return;
    }
    if (sConfirm)
    {
        if (JOY_NEW(B_BUTTON))
        {
            sConfirm = FALSE;
            PlaySE(SE_SELECT);
            DrawScreen(FALSE);
        }
        else if (JOY_NEW(A_BUTTON))
        {
            sClosing = TRUE;
            PlaySE(SE_SELECT);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        }
        return;
    }
    if (JOY_NEW(A_BUTTON))
    {
        sConfirm = TRUE;
        PlaySE(SE_SELECT);
        DrawScreen(FALSE);
    }
    else if (JOY_REPEAT(DPAD_UP | DPAD_DOWN))
    {
        if (JOY_REPEAT(DPAD_UP))
            sChoice = (sChoice + DIGIMON_STARTER_COUNT - 1) % DIGIMON_STARTER_COUNT;
        else
            sChoice = (sChoice + 1) % DIGIMON_STARTER_COUNT;
        PlaySE(SE_SELECT);
        ShowPortrait();
        DrawScreen(TRUE);
    }
}

static void VBlank(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Main(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

void CB2_DigiviceStarter(void)
{
    SetVBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, &sBg, 1);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    InitWindows(sWindows);
    DeactivateAllTextPrinters();
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    ResetAllPicSprites();
    LoadPalette(sPalette, 0, sizeof(sPalette));
    sChoice = 0;
    sConfirm = FALSE;
    sClosing = FALSE;
    DrawScreen(FALSE);
    CreatePortraits();
    ShowPortrait();
    CreateTask(Task_Choose, 0);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    EnableInterrupts(DISPSTAT_VBLANK);
    SetVBlankCallback(VBlank);
    SetMainCallback2(Main);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
}
