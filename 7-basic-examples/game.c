#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define MAX 100
#define MIN   1

int check( int number_user, int number_myst ) { 
    if ( number_user > number_myst ) {
        return 1 ; /* too High */
    }
    if ( number_user < number_myst ) {
        return 2 ; /* too Low */
    } else {
        return 0 ; /* egual */
    }
}

int main ( int argc, char** argv ) {
    int my_number  = 0 ;
    int mystery_number ;
    int count = 0 ;
    int test = 0 ;
    srand( time( NULL ) ) ; /* generate rand seed  once only */
    mystery_number = ( rand() % ( MAX  - MIN + 1 ) ) + MIN  ;
    do {
        printf( "saisir votre nombre : " ) ;
        scanf( "%d", &my_number ) ;
        count++ ;
        test = check( my_number, mystery_number ) ;
        switch( test ) {
            case 1:
                printf( "%d est trop grand !.\n", my_number ) ;
                break ;
            case 2:
                printf( "%d est trop petit !.\n", my_number ) ;
                break ;
            default:
                printf( "Bravo vous avez trouvé le nombre mystère !") ;
        }
    } while (test)  ; /* 0  is egual, then stop. */

    printf( "le nombre mystère était: %d, ", mystery_number ) ;
    printf( "vous l'avez trouvé en %d coups.\n", count ) ;

    return 0 ;
}
