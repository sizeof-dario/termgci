#include "colour.h"

void AssignColour(colour_t colour, colour_t value)
{
    unsigned char i;
    while (value[i])
    {
        colour[i] = value[i];
        i++;
    }    
}
