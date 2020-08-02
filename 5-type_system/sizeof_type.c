#include <stdio.h>

int main(void) {
    printf( "size of void: %lu\n", sizeof(void) );
    printf( "size of 0: %lu\n", sizeof(0) );
    printf( "size of 'x': %lu\n", sizeof( 'x' ));
    printf( "size of 'hello': %lu\n", sizeof( "hello" ) );

    return 0;
}
