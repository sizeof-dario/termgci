/******************************************************************************//**
 * 
 * @file colour16.h
 * 
 * @brief Contains the typedef of the @ref colour16_t type,
 *        along with the macro definition of its size and intended possible values.
 * 
 * @details The @ref colour16_t type is based on the 8–16 colours set.
 *          Such set contains 34 ANSI escape codes that tell the terminal to change
 *          its background or foreground colours.
 *          The 8-16 colours codes are not absolute, that is, their appereance can
 *          slightly vary, depending on the terminal.
 *          These are the 8 non-bright colours that will be displayed in an Ubuntu
 *          virtual terminal:
 *              - Black:          #010101
 *              - Red:            #DE382B
 *              - Green:          #39B54A
 *              - Yellow:         #FFC706
 *              - Blue:           #006FB8
 *              - Magenta:        #6E2671
 *              - Cyan:           #2CB5E9
 *              - White:          #CCCCCC
 *          .
 *          These are their bright counterparts (still as they are displayed in an
 *          Ubuntu virtual terminal):
 *              - Bright black:   #808080
 *              - Bright red:     #FF0000
 *              - Bright green:   #00FF00
 *              - Bright yellow:  #FFFF00
 *              - Bright blue:    #0000FF
 *              - Bright magenta: #FF00FF
 *              - Bright cyan:    #00FFFF
 *              - Bright white:   #FFFFFF
 *          .
 * 
 **********************************************************************************/

#ifndef COLOUR16_H
#define COLOUR16_H

#define C16SIZE 6 /**< Size of the @ref colour16_t type. */

/**
 * Type intended to assume one of the 34 possible ANSI escape codes that allow for
 * setting the colour of terminal cells accordingly to the 8-16 colour set.
 */
typedef char colour16_t[C16SIZE];

#define C16_FG_BLACK      "\e[030m"
#define C16_FG_RED        "\e[031m"
#define C16_FG_GREEN      "\e[032m"
#define C16_FG_YELLOW     "\e[033m"
#define C16_FG_BLUE       "\e[034m"
#define C16_FG_MAGENTA    "\e[035m"
#define C16_FG_CYAN       "\e[036m"
#define C16_FG_WHITE      "\e[037m"

#define C16_FG_DEFAULT    "\e[039m"

#define C16_BG_BLACK      "\e[040m"
#define C16_BG_RED        "\e[041m"
#define C16_BG_GREEN      "\e[042m"
#define C16_BG_YELLOW     "\e[043m"
#define C16_BG_BLUE       "\e[044m"
#define C16_BG_MAGENTA    "\e[045m"
#define C16_BG_CYAN       "\e[046m"
#define C16_BG_WHITE      "\e[047m"

#define C16_BG_DEFAULT    "\e[049m"

#define C16_FG_BR_BLACK   "\e[090m"
#define C16_FG_BR_RED     "\e[091m"
#define C16_FG_BR_GREEN   "\e[092m"
#define C16_FG_BR_YELLOW  "\e[093m"
#define C16_FG_BR_BLUE    "\e[094m"
#define C16_FG_BR_MAGENTA "\e[095m"
#define C16_FG_BR_CYAN    "\e[096m"
#define C16_FG_BR_WHITE   "\e[097m"

#define C16_BG_BR_BLACK   "\e[100m"
#define C16_BG_BR_RED     "\e[101m"
#define C16_BG_BR_GREEN   "\e[102m"
#define C16_BG_BR_YELLOW  "\e[103m"
#define C16_BG_BR_BLUE    "\e[104m"
#define C16_BG_BR_MAGENTA "\e[105m"
#define C16_BG_BR_CYAN    "\e[106m"
#define C16_BG_BR_WHITE   "\e[107m"

#endif // COLOUR16_H