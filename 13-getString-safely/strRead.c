#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "strRead.h"

int strRead( char* string, int length ) 
{
    char* entry_pos = NULL; /* pointer to address position of '\n' caracter */

    if ( fgets( string, length, stdin ) != NULL ) /* stdin is file descriptor for keyboard (it could be a file)*/
    {
        entry_pos = strchr( string, '\n' ); /* get the address of string '\n' (enter) into stdin */
        if ( entry_pos != NULL )
        {
            *entry_pos = '\0'; /* replace '\n' to '\0' */
        }
        else
        {
            dropBuffer(); /* if array of string shorter than stdin, we didn't find '\n' and we need to clear what is leaving into the buffer */
        }
        
        return 0;
    }
    dropBuffer(); /* if a problem occure, we need to reset the buffer either */

    return 1; /* ≠0 is an error */
}

void dropBuffer()
{
    int c = 0;
    while ( c != '\n' && c != EOF )
    {
        c = getchar(); /* get one char from current buffer (stdin here), each time one cell of buffer is cleared */
    }
}

long strReadLong()
{
    char str_long[100] = {0}; /* init array to return a result */

    if ( strRead( str_long, 100 ) == 0 ) /* maybe add a #define in strRead.h file */
    {
        /* printf( "DEBUG: strRead.strReadLong.str_long = %s.\n", str_long ); */
        return strtol( str_long, NULL, 10 ); /* prototype long strtol( const char *start, char **end, int base ); */
    }
    else
    {
        /* if error */
        return -1;
    }
    
}
