/**
 * 
 * @file colour16.h
 * 
 * @brief Contains the typedef definition of the @ref colour16_t type
 *        along with the macro definition of its size and intended possible values.
 * 
 * @details The @ref colour16_t type is based on the 8-16 colours set.
 *          Such set contains 34 ANSI escape codes that tell the terminal to change
 *          its background or foreground colours.
 *          The 8-16 colours codes are not absolute, that is, they can translate to
 *          (usually slightly) different colours, depending on the terminal.
 *          As an example, there are the 8 non-bright colours that will be displayed
 *          in an Ubuntu Virtual Terminal:
 * 
 *          Black:   #010101
 *          Red:     #DE382B
 *          Green:   #39B54A
 *          Yellow:  #FFC706
 *          Blue:    #006FB8
 *          Magenta: #6E2671
 *          Cyan:    #2CB5E9
 *          White:   #CCCCCC 
 */

#ifndef COLOUR16_H
#define COLOUR16_H

#define C16SIZE 6 /**< Size of the @ref colour16_t type. */

/**
 * Type intended to assume one of the 34 possible ANSI escape codes that allow for
 * setting the colour of terminal cells accordingly to the 8-16 colour set.
 */
typedef char colour16_t[C16SIZE];

#endif