#include<stdio.h>

int myStrlen( const char* string  ) ;

int main( int argc, char** argv ) {
    const char une_chaine[] = "ceci est une chaine de caractères" ;
    printf( "la chaine de caractère: \"%s\"  contient %d caractères.\n", une_chaine, myStrlen( une_chaine ) ) ;

    return 0 ;
}

int myStrlen( const char* string  ) {
    int length = 0 ;
    char current = 0 ;
    
    do {
        current = string[length] ;
        length++ ;
    } while( current != '\0' ) ;
    return length-- ; /* we need to substract `\0` char */
}
