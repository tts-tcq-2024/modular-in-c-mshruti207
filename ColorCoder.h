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

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern const int numberOfMajorColors;
extern const int numberOfMinorColors;

ColorPair CreateColorPair(MajorColor major, MinorColor minor);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
void PrintColorCodingReference();


#endif // COLOR_CODER_H
