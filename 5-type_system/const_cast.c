#include <stdio.h>

int main(void) {
    const int x = 10; /* so we wouldn't be able to change value for x */
    *( (int*)&x ) = 30; /* address &x is casting as point on int, and we points on the value */
    printf( "x = %d \n", x );

    return 0;
}
