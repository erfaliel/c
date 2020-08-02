#include <stdio.h>

const int arr[] = {1, 2, 3, 4};
void f( int const *arr ) {
    printf( "sizeof for array accepted as argument in function:%zu\n", sizeof( arr ) );
}

int main( void ) {
    f( arr );
    printf( "sizeof for array arr:%zu\n", sizeof( arr ) );
    return 0;
}
