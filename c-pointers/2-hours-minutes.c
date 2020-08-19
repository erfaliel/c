#include<stdio.h>

void cutMinutes( int* hours, int* minutes ) ; /* function prototype declaration */

int main( int argc, char** argv ) {
    int minutes = 90 ;
    int hours = 0 ;
    cutMinutes( &hours, &minutes ) ;
    printf( "The result is : %d hour", hours ) ;
    if( hours > 1 ) { 
        printf( "s" ) ; 
    }
    printf( " ,%d minute",minutes ) ;
    if ( minutes > 1  ) {
        printf( "s" ) ; 
    }
    printf( ".\n" ) ;
}

void cutMinutes( int* pointer_on_hours, int* pointer_on_minutes ) { /* so we copy &hours in pointer_on_hours … */
    /* We could declare 'void cutMinutes( int* hours, int* minutes )', because hours, and minutes here are */
    /*variable just in sope of the function */
    *pointer_on_hours = *pointer_on_minutes / 60 ;
    /* *pointer_on_minutes = *pointer_on_minutes - ( *pointer_on_hours * 60 ) ; */
    *pointer_on_minutes = *pointer_on_minutes % 60 ;
}
