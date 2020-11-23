#include <stdio.h>
#include <stdlib.h>

char *
find_char ( char const *source, char const *chars )
{

    /* char *match = *chars; */

    while ( *source != '\0' ) {
        printf("char_outer:%c\n", *source);

        while ( *chars != '\0' ) {
            printf("char_inner:%c\n", *chars);
            *chars++;
        }
        *source++;
        /* *match = *chars; */
    }

    return NULL;

}

int
main( void )
{
    char *str2 = "ajtu";

    char *str1 = "kingu";

    char *str3 = find_char( str1, str2 );

    printf("result:%s\n",  str3);

    return EXIT_SUCCESS;
}
