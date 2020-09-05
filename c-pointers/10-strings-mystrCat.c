#include<stdio.h>

char* myStrCat( char* chaine1, const char* chaine2 ) ;

int main( int argc, char** argv ) {
    char chaine1[100] = "Salut, " ;
    char chaine2[] = "Vincent !" ;
    char* pointeur ;
    pointeur = myStrCat( chaine1, chaine2 ) ; /* it was not necessary to assign pointer, because chaine1 is mutable */
    /* the myStrCat could be void return, because it is chaine1 the result, but I would like to stick to
       the initial strcat */ 
    printf( "la chaine1 vaut maintenant :%s\n", chaine1 ) ;
    printf( "le pointeur récupéré en retour de la fonction permet de lire : %s\n", pointeur ) ;
    printf( "la chaine2 vaut toujours : %s\n", chaine2 ) ;
    return 0 ;
}

char* myStrCat( char* chaine1, const char* chaine2 ) {
    /* chaine1 parsing to point out where chaine2 needs to start concat */
    char current = 0 ;
    int ch1_count = 0 ;
    int ch2_count = 0 ;
    do {
        current = chaine1[ch1_count] ;
        ch1_count++ ;
    } while ( current != '\0' );
    /* index need to roolback one raw to erase \0 char */
    ch1_count-- ;
    /* append chaine2 into chain1 */
    current = 0;
    
    do {
        current = chaine2[ch2_count] ;
        chaine1[ch1_count] = current ;
        ch1_count++; ch2_count++ ;
    } while ( current != '\0' ) ;

    return chaine1 ;
    
}
