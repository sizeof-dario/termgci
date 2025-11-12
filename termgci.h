/********************************************************//**
 * 
 * @file termgci.h
 * 
 * @brief Master include file for termgci based applications.
 * 
 ************************************************************/

#ifndef TERMGCI_H
#define TERMGCI_H

#include "colour16.h"

/**
 * Represents a terminal cell whose possible foreground and background colours are part of the 8-16 colours set.
 */
typedef struct c16cell
{
    colour16_t fgColour; /**< Foreground colour. */
    colour16_t bgColour; /**< Background colour. */
    char       ch;       /**< Character to format accordingly to the foreground and background colours. */
} c16cell_t;

void SetC16Cell(c16cell_t *c16cell, colour16_t fgColour, colour16_t bgColour, char ch);

c16cell_t* SetC16CellFGColour(c16cell_t *c16cell, colour16_t fgColour);

c16cell_t* SetC16CellBGColour(c16cell_t *c16cell, colour16_t bgColour);

c16cell_t* SetC16CCellCh(c16cell_t *c16cell, char ch);

#endif // TERMGCI_H