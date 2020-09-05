#include<stdio.h>

#define TAILLE_MAX 1000 /* set the max array to restrict the fgets function */
#define PATH "../files/test-2"

/* prototype */
/* char* fgets(char* chaine, int nbreDeCaracteresALire, FILE* pointeurSurFichier); */
/* fgets reads ONE line and stop when it gets `\n` char in the line */

int main( int argc, char** argv )
{
    char line[TAILLE_MAX] = ""; /* init array that will get the line from the file */

    FILE* file = NULL; /* init descriptor of file */

    /* read one line */
    file = fopen( PATH, "r" ) ; /* open file */
    if ( file != NULL )
    {
        fgets( line, TAILLE_MAX, file );
        printf( "we read the line1 : %s\n", line );
        fclose( file ); /* close the file */
    }
    else
    {
        printf( "Un problème est survenu durant l'ouverture du fichier : ");
        printf( PATH );
        printf( "\n");
    }

    /* read the whole file */
    file = NULL;
    file = fopen( PATH, "r" );
    printf( "File's content is :\n" );
    if ( file != NULL )
    {
        while ( fgets( line, TAILLE_MAX, file) != NULL ) /* we read file untill we get an error (NULL) */
        {
            printf( "%s", line ); /* print the line `\n` included */
        }
        fclose( file ); /* close the descriptor to freed memory */
    }
    else
    {
        printf( "Un problème est survenu durant l'ouverture du fichier : ");
        printf( PATH );
        printf( "\n");
    }
    
    
    return 0;
}
