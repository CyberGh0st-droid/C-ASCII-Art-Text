# C-ASCII-Art-Text
generate ascii text or characters with easy to use functions
main.c should serve as an example for using the header.
simply call printchar() with the first argument as a character and the second argument as a font address

example: printchar('b', &Graffiti);

and with printstring:
printstring("string", &Graffiti);

keep in mind that if the total lenght of a line of the resulting ascii art for an input string is longer than the line of the console text wrapping will occur and the output won't look as intended

