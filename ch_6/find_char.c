#include <stdio.h>
#include <stdlib.h>

char *
find_char ( char const *source, char const *chars )
{

    const char *match;

    match = chars;

    while ( *source != '\0' ) {
        /* printf("char_outer:%c\n", *source); */

        while ( *match != '\0' ) {
            /* printf("char_inner:%c\n", *match); */
            if ( *source == *match ) {
                return source;
            }
            match++;
        }
        
        source++;
        match = chars;
    }

    return NULL;

}

int
main( void )
{
    char *str2 = "ajitu";

    char *str1 = "kingu";

    char *str3 = find_char( str1, str2 );

    printf("result:%s\n",  str3);

    return EXIT_SUCCESS;
}
