#include <stdio.h>
#include <stdlib.h>

char *
del_substr ( char *str, char const *substr )
{

    const char *match;

    match = substr;

    while ( *str != '\0' ) {
        printf("char_outer:%c\n", *str); 

        while ( *match != '\0' ) {
            printf("char_inner:%c\n", *match);
            if ( *str == *match ) {
                return str;
            }
            match++;
        }
        
        str++;
        match = substr;
    }

    return NULL;

}

int
main( void )
{
    char *str2 = "ajitu";

    char *str1 = "kingu";

    char *str3 = del_substr( str1, str2 );

    printf("result:%s\n",  str3);

    return EXIT_SUCCESS;
}
