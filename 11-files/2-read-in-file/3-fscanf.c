#include<stdio.h>
#define PATH "../files/scores"

int main( int argc, char** argv )
{
    FILE* file = NULL; /* init pointer of file descriptor */
    int scores[3] = {0}; /* init array of scores */
    file = fopen( PATH, "r" );
    if ( file != NULL )
    {
        fscanf( file, "%d %d %d", &scores[0], &scores[1], &scores[2] ); /* we get int accordingly with the file format */
        /* as scanf we have to deal with &addresses */
        printf( "Les meilleurs scores sont: %d, %d, %d.\n", scores[2], scores[1], scores[0] );
    }
    else
    {
        printf( "Un problème est survenu durant l'ouverture du fichier : ");
        printf( PATH );
        printf( "\n");
    }
    
    return 0;
}
