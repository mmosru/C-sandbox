#include <stdio.h>
#include <stdlib.h>

int
main( void ) {
    
    int ch;
    
    while( ( ch = getchar() ) != EOF ) {
        putchar( ch >= 65 && ch <= 90 ? ch + 32 : ch );
    }

    return EXIT_SUCCESS;
}

