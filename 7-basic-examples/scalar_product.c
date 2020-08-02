#include <stdio.h>

const int scalar1[] = {1, 2, 3};
const int scalar2[] = {4, 5, 6};

int* array_product( const int* array1, const int* array2, size_t vector_length ) {
    /* we need to calcul the array_length out of the array for size_t type */
    size_t i;
    int product[vector_length] = {0} ;
    for( i = 0; i < vector_length; i++ ) {
        product[i] = array1[i] * array2[i] ;     
    }
    return product ;
}

int main(void) {
    int size = sizeof( scalar1 ) / sizeof( int ); /* calcul vectors size */
    int tab[size]; 
    int i ; 
    tab = array_product( scalar1, scalar2, size ); /* array_product call */
    printf("The product for two vector is : (");
    for( i = 0; i < size; i++ ) {
        printf( "%d ,", tab[i]  );
    }
    printf(")\n");

    return 0;
}
