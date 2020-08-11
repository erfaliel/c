#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* add commentary */
const int MIN = 1 ;
const int MAX[] = {10, 100, 1000} ;

/* add array_length to get level's number automaticly */

/* check if the gamer's number is good and give an advice */
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
/* give the choice of the level */
int initLevel( size_t level_number ) {
    int level = 1 ;
    do {
        printf( " choisissez le niveau de difficulté (1 à %lu :) ", level_number ) ;
        scanf( "%d", &level ) ;
        printf( "Vous avez choisi : %d\n", level ) ;
    } while ( !(level > 0 && level <= 2) ) ;
    return level ;
}
/* roll the dice… */
int initMystery( int level, const int* max ) {
    int max_party = max[level - 1] ;
    srand( time( NULL ) ) ; /* generate rand seed  once only */
    return ( rand() % ( max_party  - MIN + 1 ) ) + MIN  ;
}    

int main ( int argc, char** argv ) {
    /* init the game */
    int my_number  = 0 ;
    int mystery_number ;
    int count = 0 ;
    int test = 0 ;
    size_t level_number ;
    int level ;

    level_number = ( sizeof( MAX ) / sizeof( int ) ) ; /* get the game's level number */
    level = initLevel( level_number ) ;
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
