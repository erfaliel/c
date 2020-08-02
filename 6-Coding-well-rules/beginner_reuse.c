#include <stdio.h>

int array[] = {1, 2, 3, 4, 5};

int sum( int* array ) {
    int i;
    int sum = 0;
    for( i = 0; i < 5; i++ ) {
        sum = sum + array[i];
    }
    return sum;
} 

int main( int argc, char** argv ) {
    printf( "The sum is : %d\n", sum(array) );
    return 0;
}
