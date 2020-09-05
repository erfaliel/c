#include<stdio.h>

/* sprintf is included in stdio.h library */

int main( int argc, char** argv ){
    char chaine[100] ;
    int age =  15 ;

    /* we write "tu as 15 ans" into chain */
    sprintf( chaine, "Tu as %d ans !", age ) ; /* the same stuff as printf but into a chain, not screen output */
    /* Now we can check the chain by printf */
    printf( "%s\n", chaine ) ;

    return 0 ;
}
