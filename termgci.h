/********************************************************//**
 * 
 * @file termgci.h
 * 
 * @brief Master include file for termgci based applications.
 * 
 ************************************************************/

#ifndef TERMGCI_H
#define TERMGCI_H

#define COLOUR16SIZE 6 /**< Size of the @ref colour16_t type. */

/**
 * Type intended to assume one of the 34 possible ANSI escape codes that allow for
 * setting the colour of terminal cells accordingly to the 8-16 colour set.
 */
typedef char colour16_t[COLOUR16SIZE];

/**
 * Represents a terminal cell whose possible foreground and background colours are part of the 8-16 colours set.
 */
typedef struct c16cell
{
    colour16_t fgColour; /**< Foreground colour. */
    colour16_t bgColour; /**< Background colour. */
    char       ch;       /**< Character to format accordingly to the foreground and background colours. */
} c16cell_t;

#endif // TERMGCI_H