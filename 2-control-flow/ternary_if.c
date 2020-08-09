#include<stdio.h>

void print_age( int age ) {
    int majeur = 0 ;
    majeur = ( age >= 18 ) ? 1 : 0 ;  /* ternary test */
    printf( "Vous avez %d an", age ) ;
    if ( !(age == 1 ) ) {
        printf("s") ;
    }
    printf(".\n") ;
    if ( majeur ) {
        printf( "Vous êtes majeur. \n" ) ;
    }

}

int main( int argc, char** argv ) {
    print_age( 19 ) ;
    print_age( 1 ) ;
    
    return 0 ;
}

