#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"random-word.h"

#define LINE_MAX_SIZE 26

void wordGameFromFile( const char* file_path, char* word_game )
{
    int count = 0;
    FILE* file = NULL;
    file = fopen( file_path, "r" );
    if ( file == NULL )
    {
        puts( "Un problème est survenu lors de l'ouverture du fichier dico." );
        exit( 0 );
    }
    count = fileLineCount( file );        /* count means the number of word in the file */
    count = initWordGameNumber( count ); /* count becomes the random selected number to read into the file */ 
    /* printf( "DEBUG: func wordGameFromFile word select number is: %d\n", count ); */
    selectWord( file, count, word_game ); /* count  because first line is a 1 number in a file */   
    /* printf( "DEBUG: func wordGameFormFile :The selected word is : %s.\n", word_game ); */
    fclose( file );
}
int initWordGameNumber( const int max ) 
{
    srand( time( NULL ) ) ; /* generate rand seed  once only */
    return (rand() % max) + 1 ; /* + 1 to avoid the 0 solution */
}
int fileLineCount( FILE* file )
{
    int one_char = 0;
    int count = 0;
    while ( one_char != EOF )
        {
            while ( one_char != '\n' )
            {
                one_char = fgetc( file );
                /* printf( "%c", one_char ); */
            }
            one_char = fgetc( file ); /* to get the first char on the next line, then one_char value is not '\n' anymore. */
            /* printf( "DEBUG: func fileLineCount : %c", one_char ); */ 
            count++;
        }
    /* printf( "DEBUG : func fileLineCount :Le fichier comporte %d lignes.\n", count) ;*/
    return count;
}
void selectWord( FILE* file, const int line, char* word_game )
{
    int i ;
    rewind( file ); /* return to the begining of the file */
    for (i = 0; i < line; i++ )
    {
        fgets( word_game, LINE_MAX_SIZE, file ); /* read line untill the selected line */
    }
    
    /* printf( "DEBUG: func selectWord : Read line %d, word %s.\n", line, word_game );*/
}
