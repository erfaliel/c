#include <stdio.h>

const int scalar1[] = {1, 2, 3};
const int scalar2[] = {4, 5, 6};

/* function to print an array content in terminal ouput */
void print_array( const int* array, size_t count ) {
    size_t i ;
    printf("array : (");
    for( i = 0; i < count; i++ ) {
        printf( "%d ,", array[i] ) ;
    }
    printf( ")\n" ) ;
}
/* function to make product between two arrays [a,b,c].[1,2,3] -> [a1,b2,c3] */
void  product_array( const int* array1, const int* array2, int* result, size_t array_length  ) {
    size_t i ;
    for( i = 0; i < array_length; i++ ) {
        result[i] = array1[i] * array2[i] ;
    }
}
/* function to sum array content [a,b,c] -> a+b+c */
int sum_array( int* array, size_t array_length ) {
    size_t i ;
    int sum = 0 ;
    for( i = 0; i < array_length; i++ ) {
        sum = sum + array[i] ;
    }
    return sum ;
}
int main(void) {
    size_t size = sizeof( scalar1 ) / sizeof( int ) ; /* calcul vectors size */
    int scalar_product[] = {0, 0, 0} ;
    product_array( scalar1, scalar2, scalar_product, size ) ;
    print_array( scalar1, size ) ;
    print_array( scalar_product, size ) ;
    printf( "sum of precedent array is: %d \n", sum_array( scalar_product, size ) ) ;

    return 0;
}
