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

ColorPair CreateColorPair(MajorColor major, MinorColor minor);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);
void PrintColorCodingReference();

#endif // COLOR_CODER_H
