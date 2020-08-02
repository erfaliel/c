#include <stdio.h>

int array[] = {1, 2, 3, 4, 5, 6};

int sum( int* array, size_t count ) {
    int i;
    int sum = 0;
    for( i = 0; i < count; i++ ) {
        sum = sum + array[i];
    }
    return sum;
} 

int main( int argc, char** argv ) {
    size_t array_length = sizeof( array ) / sizeof( int );
    printf( "The sum is : %d\n", sum( array, array_length ) );
    return 0;
}
