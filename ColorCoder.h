#ifndef COLORCODER_H
#define COLORCODER_H

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

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);

#endif // COLOR_CODER_H
