#include <stdio.h>

int main(void) {
    
    int a = 4;

    double b = 10.5 * (double)a; /* now a is a double */
    printf( "here b =%f\n", b );

    int c = 129;
    char k = (char)c; // ???
    printf( "What about K = %d\n" );

    return 0;
}
