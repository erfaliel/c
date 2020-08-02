#include <stdio.h>

const int scalar1[] = {1, 2, 3};
const int scalar2[] = {4, 5, 6};

void print_array( const int* array, size_t count ) {
    size_t i ;
    printf("array : (");
    for( i = 0; i < count; i++ ) {
        printf( "%d ,", array[i] ) ;
    }
    printf( ")\n" ) ;
}

int main(void) {
    size_t size = sizeof( scalar1 ) / sizeof( int ); /* calcul vectors size */
    print_array( scalar1, size );
    return 0;
}
