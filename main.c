#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    White,
    Red,
    Black,
    Yellow,
    Violet
} MajorColor;

typedef enum {
    Blue,
    Orange,
    Green,
    Brown,
    Slate
} MinorColor;

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

ColorPair CreateColorPair(MajorColor major, MinorColor minor) {
    ColorPair pair;
    pair.majorColor = major;
    pair.minorColor = minor;
    return pair;
}

MajorColor GetMajorColor(ColorPair pair) {
    return pair.majorColor;
}

MinorColor GetMinorColor(ColorPair pair) {
    return pair.minorColor;
}

char* ColorPairToString(ColorPair pair) {
    char* result = (char*)malloc(50);
    sprintf(result, "%s %s", MajorColorNames[pair.majorColor], MinorColorNames[pair.minorColor]);
    return result;
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    if (pairNumber < 1 || pairNumber > 25) { // 5 Major * 5 Minor = 25 pairs
        fprintf(stderr, "Invalid pair number\n");
        exit(EXIT_FAILURE);
    }
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / 5);
    MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % 5);
    return CreateColorPair(majorColor, minorColor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * 5 + minor + 1;
}

void PrintColorCodingReference() {
    printf("%-15s %-15s %s\n", "Pair Number", "Major Color", "Minor Color");
    for (int pairNumber = 1; pairNumber <= 25; ++pairNumber) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        printf("%-15d %-15s %s\n", pairNumber, MajorColorNames[colorPair.majorColor], MinorColorNames[colorPair.minorColor]);
    }
}

int main() {
    PrintColorCodingReference();
    return 0;
}
