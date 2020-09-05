#include<stdio.h>
#define PATH "../files/test-2"

int main( int argc, char** argv )
{
    /* prototype int fgetc( FILE* ) return int as a char */
    char one_char = 0;
    FILE* file = NULL;
    file = fopen( PATH, "r" ); /* open file to get descriptor on read mode only */
    if ( file != NULL )
    {
        while ( one_char != EOF )
        {
            one_char = fgetc( file ); /* fget read the char under the pointer and increment the pointer */
            printf( "Nous obenons le caractère : %c, ", one_char  ); 
            printf( "en ouvrant le ficher: " ); printf( PATH ) ; printf( "\n" );

        }  /* `\n` for stings and EOF for one char */
        fclose( file );
    }
    else
    {
        printf( "Une erreur est survenue en ouvrant le fichier:  " );
        printf( PATH ); printf( ".\n" );
    }
    /* in one line*/
    printf( "Sur une ligne --> " );
    one_char = 0; /* one_char init otherwise it worth EOF */
    file = fopen( PATH, "r" ); /* open file to get descriptor on read mode only */
    if ( file != NULL )
    {
        while ( one_char != EOF)
        {
            one_char = fgetc( file );
            printf( "%c", one_char );
        }
        printf( "\n" );
        fclose( file ); /* close the file descriptor to freed memory */
    }
    else
    {
        printf( "Une erreur est survenue en ouvrant le fichier:  " );
        printf( PATH ); printf( ".\n" );
    }
    

    return 0;

}

