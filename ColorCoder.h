#ifndef COLOR_CODER_H
#define COLOR_CODER_H

typedef enum {
    White, Red, Black, Yellow, Violet
} MajorColor;

typedef enum {
    Blue, Orange, Green, Brown, Slate
} MinorColor;

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
