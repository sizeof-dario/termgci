#include "termgci.h"

#include <stdio.h>

int main()
{
    c16cell_t c16cell;
    SetC16Cell(&c16cell, C16_FG_BLACK, C16_BG_BLUE, 'B');
    printf("%s", (char*)(&c16cell));
    SetC16CCellCh(SetC16CellBGColour(&c16cell, C16_BG_RED), 'R');
    printf("%s%s%s\n", (char*)(&c16cell), C16_FG_DEFAULT, C16_BG_DEFAULT);

    // There is some bug to fix here
}