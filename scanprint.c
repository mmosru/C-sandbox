#include <stdio.h>
#include <stdlib.h>

int
main( void ) {
    
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c", ch);
    printf("\n%s", s);
    printf("\n%s", sen);

    return EXIT_SUCCESS;
}

