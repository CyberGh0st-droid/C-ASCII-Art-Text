#include "ascii_art_fonts.h"
#include "stdio.h"
#include "conio.h"
#include "ctype.h"
#include <string.h>
#include <windows.h>

int printchar(char Alpha, asciiFont* Font) {
    char (*asciiArray)[20] = NULL;

    switch (toupper(Alpha)) {
    case 'A':
        asciiArray = Font->A;
        break;
    case 'B':
        asciiArray = Font->B;
        break;
    case 'C':
        asciiArray = Font->C;
        break;
    case 'D':
        asciiArray = Font->D;
        break;
    case 'E':
        asciiArray = Font->E;
        break;
    case 'F':
        asciiArray = Font->F;
        break;
    case 'G':
        asciiArray = Font->G;
        break;
    case 'H':
        asciiArray = Font->H;
        break;
    case 'I':
        asciiArray = Font->I;
        break;
    case 'J':
        asciiArray = Font->J;
        break;
    case 'K':
        asciiArray = Font->K;
        break;
    case 'L':
        asciiArray = Font->L;
        break;
    case 'M':
        asciiArray = Font->M;
        break;
    case 'N':
        asciiArray = Font->N;
        break;
    case 'O':
        asciiArray = Font->O;
        break;
    case 'P':
        asciiArray = Font->P;
        break;
    case 'Q':
        asciiArray = Font->Q;
        break;
    case 'R':
        asciiArray = Font->R;
        break;
    case 'S':
        asciiArray = Font->S;
        break;
    case 'T':
        asciiArray = Font->T;
        break;
    case 'U':
        asciiArray = Font->U;
        break;
    case 'V':
        asciiArray = Font->V;
        break;
    case 'W':
        asciiArray = Font->W;
        break;
    case 'X':
        asciiArray = Font->X;
        break;
    case 'Y':
        asciiArray = Font->Y;
        break;
    case 'Z':
        asciiArray = Font->Z;
        break;
    case ' ':
        asciiArray = Font->Space;
    default:
        printf("Character not found in the font.\n");
        return 1; // Return an error code
}
    int lines = Font->Lines;
    for (int i = 0; i <= lines; i++) {
        printf("%s\n", asciiArray[i]);
    }
    return 0;   
}

int printstring(char* Alpha, asciiFont* Font) {
    int length = strlen(Alpha) ;
    
    int lines = Font->Lines;
    
    char (*asciiArray)[20] = NULL;
    
    for (int CurrentLine = 0; CurrentLine <= lines; CurrentLine++) {
        for (int b = 0; b < length; b++) {
           
            //printf("aaaa%d", b);
            //printf("Current Character: %c; @ Line %d;\n", Alpha[b], CurrentLine);
            switch (toupper(Alpha[b])) {
                case 'A':
                    asciiArray = Font->A;
                    break;
                case 'B':
                    asciiArray = Font->B;
                    break;
                case 'C':
                    asciiArray = Font->C;
                    break;
                case 'D':
                    asciiArray = Font->D;
                    break;
                case 'E':
                    asciiArray = Font->E;
                    break;
                case 'F':
                    asciiArray = Font->F;
                    break;
                case 'G':
                    asciiArray = Font->G;
                    break;
                case 'H':
                    asciiArray = Font->H;
                    break;
                case 'I':
                    asciiArray = Font->I;
                    break;
                case 'J':
                    asciiArray = Font->J;
                    break;
                case 'K':
                    asciiArray = Font->K;
                    break;
                case 'L':
                    asciiArray = Font->L;
                    break;
                case 'M':
                    asciiArray = Font->M;
                    break;
                case 'N':
                    asciiArray = Font->N;
                    break;
                case 'O':
                    asciiArray = Font->O;
                    break;
                case 'P':
                    asciiArray = Font->P;
                    break;
                case 'Q':
                    asciiArray = Font->Q;
                    break;
                case 'R':
                    asciiArray = Font->R;
                    break;
                case 'S':
                    asciiArray = Font->S;
                    break;
                case 'T':
                    asciiArray = Font->T;
                    break;
                case 'U':
                    asciiArray = Font->U;
                    break;
                case 'V':
                    asciiArray = Font->V;
                    break;
                case 'W':
                    asciiArray = Font->W;
                    break;
                case 'X':
                    asciiArray = Font->X;
                    break;
                case 'Y':
                    asciiArray = Font->Y;
                    break;
                case 'Z':
                    asciiArray = Font->Z;
                    break;
                case 32:
                    asciiArray = Font->Space;

                default:
                    //printf("%d", Alpha[b]);
                    
                    if (Alpha[b] == 32) {
                        asciiArray = Font->Space;
                       // printf("space");
                        break;
                    } else if (Alpha[b] == 10) { continue; }
                    else if (Alpha[b] == 0) { continue; }
                    //printf("undefined character: %d", Alpha[b]);
                    return 1;
            }
                        printf("%s", asciiArray[CurrentLine]);
            //printf("%d, %c ::", CurrentLine, Alpha[b]);
        }
        printf("\n");
        
    }

    return 0;
}
