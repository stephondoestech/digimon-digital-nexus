#include "global.h"
#include "event_data.h"
#include "main.h"
#include "palette.h"
#include "sprite.h"
#include "starter_choose.h"
#include "task.h"
#include "test/test.h"

static void ReturnFromChooser(void)
{
}

static void Frame(u16 keys)
{
    gMain.newKeys = keys;
    gMain.newAndRepeatedKeys = keys;
    gMain.callback2();
    VBlankIntrWait();
}

static void WaitForFade(void)
{
    for (u32 i = 0; i < 64 && gPaletteFade.active; i++)
        Frame(0);
    EXPECT(!gPaletteFade.active);
}

TEST("Digivice UI browses all eight choices, cancels confirmation, and returns selection")
{
    u32 choice;
    PARAMETRIZE { choice = 0; }
    PARAMETRIZE { choice = 1; }
    PARAMETRIZE { choice = 2; }
    PARAMETRIZE { choice = 3; }
    PARAMETRIZE { choice = 4; }
    PARAMETRIZE { choice = 5; }
    PARAMETRIZE { choice = 6; }
    PARAMETRIZE { choice = 7; }

    MainCallback previous = gMain.callback2;
    MainCallback previousSaved = gMain.savedCallback;
    gMain.savedCallback = ReturnFromChooser;
    gSpecialVar_Result = 0xFFFF;
    CB2_ChooseStarter();
    WaitForFade();
    // Wrapping must return to Agumon; B on the list must not leave the rescue.
    Frame(DPAD_UP);
    Frame(DPAD_DOWN);
    Frame(B_BUTTON);
    for (u32 i = 0; i < choice; i++)
        Frame(DPAD_DOWN);
    Frame(A_BUTTON);
    Frame(B_BUTTON);
    EXPECT_EQ(gSpecialVar_Result, 0xFFFF);
    Frame(A_BUTTON);
    Frame(A_BUTTON);
    WaitForFade();
    Frame(0);
    EXPECT_EQ(gSpecialVar_Result, choice);
    EXPECT(gMain.callback2 == ReturnFromChooser);
    gMain.callback2 = previous;
    gMain.savedCallback = previousSaved;
    gMain.newKeys = 0;
    gMain.newAndRepeatedKeys = 0;
}
