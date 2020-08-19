#include<stdio.h>

int increment( void ) ;

int main( int argc, char** argv ) {
        printf( "i vaut %d.\n", increment() ) ;
        printf( "i vaut %d.\n", increment() ) ;
        printf( "i vaut %d.\n", increment() ) ;
        printf( "i vaut %d.\n", increment() ) ;
}

int increment( void ) {
    static number = 0 ;
    return ++number ;
}

