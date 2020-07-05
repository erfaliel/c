#include <stdio.h>

int main(void) {
    int i;
    for ( i =  1; i < 11; i++ ) {
        if ( i == 6 ) { return i; } /* it is for example, because the while statement is better here */
    }
    printf( "then : %d \n", i );

    return 0;
}
