#include<stdio.h>

int myStrlen( char* string  ) ;

int main( int argc, char** argv ) {
    char une_chaine[] = "ceci est une chaine de caractères" ;
    printf( "la chaine de caractère: \"%s\"  contient %d caractères.\n", une_chaine, myStrlen( une_chaine ) ) ;
}

int myStrlen( char* string  ) {
    int length = 0 ;
    char current = 0 ;
    
    do {
        current = string[length] ;
        length++ ;
    } while( current != '\0' ) ;
    return length-- ; /* we need to substract `\0` char */
}
