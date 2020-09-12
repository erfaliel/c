#include<stdio.h>


int main( int arg, char** argv )
{
    int array[3] = {1, 3, 2};
    int max = 0;
    int i = 0;
    for ( i = 0; i < 3; i++ )
    {
        max = ( array[i] > max ) ? array[i] : max;
    }
    printf( "%d", max );
    return 0;
}
