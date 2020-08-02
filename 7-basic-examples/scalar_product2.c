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

void  product_array( const int* array1, const int* array2, int* result, size_t array_length  ) {
    size_t i ;
    for( i = 0; i < array_length; i++ ) {
        result[i] = array1[i] * array2[i] ;
    }
}
int main(void) {
    size_t size = sizeof( scalar1 ) / sizeof( int ) ; /* calcul vectors size */
    int scalar_product[] = {0, 0, 0} ;
    product_array( scalar1, scalar2, scalar_product, size ) ;
    print_array( scalar1, size ) ;
    print_array( scalar_product, size ) ;

    return 0;
}
