#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ColorCoder.h"
#define MAX_COLORPAIR_NAME_CHARS 16

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",MajorColorNames[colorPair->majorColor], MinorColorNames[colorPair->minorColor]);
}

int numberOfMajorColors =sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors =sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor =  (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =(MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
   // assert(colorPair.majorColor == expectedMajor);
   // assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(MajorColor major, MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
   // assert(pairNumber == expectedPairNumber);
}
