#include<stdio.h>

#define PATH        "../files/aync.log"
#define TAILLE_MAX 1000 /* set the max array to restrict the fgets function */

long readFile( FILE* file, long* cursor, char* line, int line_size_max );

int main( int argc, char** argv )
{
    FILE* file = NULL;
    long pos_file = 0;
    char line[TAILLE_MAX] = ""; /* to restrict line size */
    file = fopen( PATH, "r" );
    if ( file != NULL )
    {
        readFile( file, &pos_file, line, TAILLE_MAX );
        fclose( file );
        printf( "cursor : %ld", pos_file );
    }
    else
    {
        printf( "Error occurred during opening file : " );
        printf( PATH );
        printf( "\n" );
    }
    
    return 0;
}

long readFile( FILE* file, long* cursor, char* line, int line_size_max )
{
    long count =0;
    while ( fgets( line, line_size_max, file ) )
    {
        printf( "%s", line );
    }
    count = ftell( file );
    *cursor = count;
    fclose( file );
    
    return *cursor; /* tester une V2 avec une structure: file: nom, size_max, cursor* et on retourne un pointeur */
}
