#ifndef COLORCODE_H
#define COLORCODE_H

typedef enum {
    WHITE, RED, BLACK, YELLOW, VIOLET
} MajorColor;

typedef enum {
    BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;

typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern const int MAX_COLORPAIR_NAME_CHARS;
extern const int numberOfMajorColors;
extern const int numberOfMinorColors;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintColorCodingReference();
#endif // COLORCODE_H
