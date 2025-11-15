#ifndef COLOUR_H
#define COLOUR_H

#include <stdio.h>

#include "colour16.h"
#include "colour256.h"
#include "colour24b.h"

typedef char *colour_t;

enum colourset
{
    COLOUR8, 
    COLOUR16, 
    COLOUR256, 
    COLOUR24B
};

void AssignColour(colour_t colour, colour_t value);

static inline int SetTerminalColour(colour_t colour)
{
    return printf("%s", colour);
}

static inline int RestoreTerminalColour()
{
    return printf("%s%s", FOREGROUND_DEFAULT, BACKGROUND_DEFAULT);
}

#endif // COLOUR_H