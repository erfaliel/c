#include<stdio.h>

int main( int argc, char** argv ) {

    /* prototype : char* fprintf( FILE*, const char*, arg… )? ; */
    FILE* my_file = NULL ; /* FILE is a specific type, it is a pointer, we need to init it with NULL value */
    int age = 0 ;
    /* ask age from the user */
    printf( "How old are you ?") ;
    scanf( "%d", &age ) ;
    /* we write on the file */
    my_file = fopen( "../files/test-2", "a" ) ; /* a is to write at the end of the file, it needs to be existing */
    /* we check if ther is a problen to open file ( default, rules, policy, …) */
    if ( my_file != NULL ) 
    {
        fprintf( my_file, "\n User is %d years old !", age ) ; /* exactly the same than printf */
        fclose( my_file ) ; /* ALWAYS close the file descriptor to freed memory */
    } 
    else 
    {
        printf( "Une erreur est survenue sur l'ouverture du fichier.") ;
    }

    return 0 ;
}
