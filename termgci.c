#include "termgci.h"

void SetC16Cell(c16cell_t *c16cell, colour16_t fgColour, colour16_t bgColour, char ch)
{
    c16cell->ch = ch;
    for (unsigned char i = 0; i < C16_SIZE; i++)
    {
        (c16cell->fgColour)[i] = fgColour[i];
        (c16cell->bgColour)[i] = bgColour[i];
    }
}

c16cell_t* SetC16CellFGColour(c16cell_t *c16cell, colour16_t fgColour)
{
    for (unsigned char i = 0; i < C16_SIZE; i++)
    {
        (c16cell->fgColour)[i] = fgColour[i];
    }
    return c16cell;
}

c16cell_t* SetC16CellBGColour(c16cell_t *c16cell, colour16_t bgColour)
{
    for (unsigned char i = 0; i < C16_SIZE; i++)
    {
        (c16cell->bgColour)[i] = bgColour[i];
    }
    return c16cell;
}

c16cell_t* SetC16CCellCh(c16cell_t *c16cell, char ch)
{
    c16cell->ch = ch;
    return c16cell;
}