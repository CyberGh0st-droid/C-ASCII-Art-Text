#include "ascii_art_fonts.h"
#include "stdio.h"
#include "conio.h"
#include "ascii_art_fonts.c"

//this is main.c wich includes "ascii_art_fonts.h", and the functions are written in ascilib.c and defined in ascii_art_fonts.h

int main() {
    while (1) {
        char userinput[100];
        printf("Enter a String: ");
        fgets(userinput, sizeof(userinput), stdin);
        //printf("%s", userinput);
        printstring(userinput, &Graffiti);
    }
}
