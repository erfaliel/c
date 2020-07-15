#include <stdio.h>

int main(void) {
    int x = 10;
    printf("x vaut %d, et son l'adresse mémoire est %x\n", x, (unsigned int)&x);
    int* px = &x; /* Took address of `x` and assigned it to `px` */
    printf( "le pointeur *px pointe sur l'adresse %x en hexa et a pour valeur %d\n", px, *px );

    *px = 42; /* We modified `x` here ! */
    printf( "&px en hexa= %x\n", px);
    printf( "x = %d\n", x ); /* outputs: 'x = 42', x a bien été modifié via le pointeur. */

    return 0;
}
