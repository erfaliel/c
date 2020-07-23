#include <stdio.h>

long array[] = { 1, 2, 3 };

int main(void) {
    printf( " sizeof returns a value of type size_t, \n on my x64 computer sizeof(long) returns : %lu \n", sizeof(long) );
    printf( "size of my array is : %zu \n", sizeof( array ) ); /* output:24 (%zu and %lu is the same ?) */
    printf( "size of one element of my array is : %zu \n", sizeof( array[0]) ); /* output: 28 */
    printf( "Then my array has 24 / 8 : %d ", ( 24 / 8 ) ); printf( "elements. \n")  ;
    return 0;
}

