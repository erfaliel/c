#include<stdio.h>

int main( int argc, char** argv ) {
    const char chaine[] = "Salut"; /* it used to make const strings in C, it is mandatory in C++ */
    /* const char* chaine = "Salut"; */

    printf( "%s\n", chaine ); /* %s for string */
    printf( "It is an array, you can do this:" );
    printf( "%c |  %c\n", chaine[2], chaine[3] ) ;
}
