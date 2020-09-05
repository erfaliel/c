#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

int main( int argc, char** argv ) {
    do {
        char chaine[] = "Texte", copie[100] = {0} ;
        strcpy( copie, chaine   ) ;
        printf( "chaine vaut : %s\n", chaine ) ;
        printf( "copie vaut : %s\n", copie ) ;
    } while ( FALSE ) ; /* just to separate code in blocks */

    do {
    char chaine1[100] = "Salut ", chaine2[]= "Vincent" ;
    strcat( chaine1, chaine2 ) ; /* chaine2 will be unchanged , but chaine1 need to be mutable (cf function protoype) */
    /* that's why we have declared chaine1[100] for a string, because we need to get more memory for chaine1 */
    printf( "chaine1 vaut : %s\n", chaine1 ) ;
    printf( "chaine2 vaut : %s\n", chaine2 ) ;
    } while ( FALSE ) ; 

    return 0 ;
}
