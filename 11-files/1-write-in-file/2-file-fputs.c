#include<stdio.h>

int main( int argc, char** argv ) {

   /* prototype  char* fputs( const char* , FILE* ) so the chars in entry can't be updated */
   FILE* my_file = NULL ; /* FILE is a specific type, it is a pointer, we need to init it with NULL value */
    my_file = fopen( "../files/test-2", "w" ) ; /* w is to write, and if file does'nt exist, it will be created */
    /* we check if ther is a problen to open file ( default, rules, policy, …) */
    if ( my_file != NULL ) {
        fputs( "How do you do guys ? ", my_file ) ; /* put strings  */
        fclose( my_file ) ; /* ALWAYS close the file descriptor to freed memory */
    } else {
        printf( "Une erreur est survenue sur l'ouverture du fichier.") ;
    }

    return 0 ;
}
