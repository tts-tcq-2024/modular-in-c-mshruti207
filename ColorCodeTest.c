#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h> // Include assert header
#include "ColorCoder.h"
#include "ColorCoder.c"

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];


void testNumberToPair(int pairNumber,MajorColor expectedMajor,MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(MajorColor major,MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, White, Brown);
    testNumberToPair(5, White, Slate);

    testPairToNumber(Black, Orange, 12);
    testPairToNumber(Violet, Slate, 25);

    return 0;
}
