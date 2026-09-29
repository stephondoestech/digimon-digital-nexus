#include "global.h"
#include "digimon_attribute.h"
#include "test/test.h"

TEST("Digimon attributes use the Vaccine, Virus, and Data cycle")
{
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_AGUMON), DIGIMON_ATTRIBUTE_VACCINE);
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_GABUMON), DIGIMON_ATTRIBUTE_DATA);
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_TYRANNOMON), DIGIMON_ATTRIBUTE_VIRUS);
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_ANGORAMON), DIGIMON_ATTRIBUTE_VACCINE);
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_ARURAUMON), DIGIMON_ATTRIBUTE_VIRUS);
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_BAKOMON), DIGIMON_ATTRIBUTE_DATA);

    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_ANGORAMON, SPECIES_ARURAUMON), UQ_4_12(1.25));
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_ARURAUMON, SPECIES_BAKOMON), UQ_4_12(1.25));
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_BAKOMON, SPECIES_ANGORAMON), UQ_4_12(1.25));
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_ARURAUMON, SPECIES_ANGORAMON), UQ_4_12(0.8));
}

TEST("Free and Unknown attributes are neutral")
{
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_FLAMEMON), DIGIMON_ATTRIBUTE_FREE);
    EXPECT_EQ(Digimon_GetAttribute(SPECIES_KERAMON), DIGIMON_ATTRIBUTE_UNKNOWN);
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_ANGORAMON, SPECIES_FLAMEMON), UQ_4_12(1.0));
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_FLAMEMON, SPECIES_ARURAUMON), UQ_4_12(1.0));
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_KERAMON, SPECIES_BAKOMON), UQ_4_12(1.0));
    EXPECT_EQ(Digimon_GetAttributeModifier(SPECIES_NONE, SPECIES_ARURAUMON), UQ_4_12(1.0));
}
