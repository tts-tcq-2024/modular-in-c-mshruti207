#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h> // Include assert header
#include <ColorCoder.h>


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
