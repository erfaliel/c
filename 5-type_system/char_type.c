#include<stdio.h>

int main( int argc, char** argv ) {
    char lettre = 0;
    printf( "Saisissez UN caractère (majuscule ou minuscule): " );
    scanf("%c", &lettre);
    printf( "\nMa lettre %c vaut %d en ASCII.\n", lettre, lettre ); /* so 'A' is 65 in ascii code */

    return 0;
}
