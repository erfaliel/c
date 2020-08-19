#include <stdio.h>
/* this example to demonstrate that you can't use sizeof into a function. */
/* by this example your will see the result between sizeof into a function, and main function */
/* that's because you pass a pointer  as argument, siseof is on the buffer that containt information */
/* about the array */
const int arr[] = {1, 2, 3, 4};
void f( int const *arr ) {
    printf( "sizeof for array accepted as argument in function:%zu\n", sizeof( arr ) );
}

int main( void ) {
    f( arr );
    printf( "sizeof for array arr:%zu\n", sizeof( arr ) );
    return 0;
}
