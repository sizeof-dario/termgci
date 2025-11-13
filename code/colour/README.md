# Colour handling
One of the first major feature of this library is the possibility to change the colours of text and its background in a terminal.

## Not mandatory to read, but if you're into jargons:
> Colours do not belong to the characters displayed themselves.
There's not such thing as a "_blue `'a'` character_" or a "_`'b'`-with-red-background chraracter_".
Everything concerning the appereance of text, therefore colours as well, is handled by the terminal
and it's more of a "graphical artifice" played by the latter.
>
> This means that, technically, you can't write code to "print a green `'c'`". In this example, you first have to set the foreground colour (that is, the colour of the text)
to green, and then go with a `printf('c');`. However, both for simplicty and because this is not so relevant for a correct usage of the library functions,
from now on I will refer to colours as they were a property of chracters and say things like "_printing a yellow `'d'` with a magenta background_".
