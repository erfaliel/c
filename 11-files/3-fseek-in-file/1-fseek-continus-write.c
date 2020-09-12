#include<stdio.h>
#include<unistd.h> /* to add sleep() function */

#define PATH        "../files/aync.log"
#define FAKE_TEXT   "this is af fake log"
#define DELAY       1

void writeInFakeLog( FILE* file, unsigned long start_number, int repeat,int delay, char* string );

int main( int argc, char** argv )
{
    int i = 1;
    FILE* file = NULL;
    file = fopen( PATH, "w" );
    if ( file != NULL )
    {
        writeInFakeLog( file, i, 10, DELAY, FAKE_TEXT );
        fclose( file );
    }
    else
    {
        printf( "Error occured when open file: ");
        printf( PATH );
        printf( "\n" );
    }
    return 0;
}
void writeInFakeLog( FILE* file, unsigned long start_number, int repeat, int delay, char* string )
{
    int i;
    for ( i = start_number; i <= repeat; i++ )
    {   
        fprintf( file, "%d - Debug : ", i );
        fputs( FAKE_TEXT, file );
        fputc( '\n', file );
        sleep( delay );
    }
}
