#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* add commentary */
const int MIN = 1 ;
const int MAX[] = {100, 1000} ;

/* add array_length to get level's number automaticly */

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

int initLevel( void ) {
    int level = 1 ;
    do {
        printf( " choisissez le niveau de difficulté (1 ou 2) " ) ;
        scanf( "%d", &level ) ;
        printf( "Vous avez choisi : %d\n", level ) ;
    } while ( level != 1 && level != 2 ) ;
    return level ;
}

int initMystery( int level, const int* max ) {
    int max_party = max[level - 1] ;
    srand( time( NULL ) ) ; /* generate rand seed  once only */
    return ( rand() % ( max_party  - MIN + 1 ) ) + MIN  ;
}    

int main ( int argc, char** argv ) {
    int my_number  = 0 ;
    int mystery_number ;
    int count = 0 ;
    int test = 0 ;
    int level = initLevel() ;
    mystery_number = initMystery( level, MAX ) ;
    do {
        printf( "saisir votre nombre entre 1 et %d : ", MAX[level - 1] ) ;
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
