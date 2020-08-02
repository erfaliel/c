#include <stdio.h>

typedef double (proc)(int);

/* declaration */
proc myproc;

/* … */
/* definition */
double myproc( int x ) { return 42.0 + x; }

int main(void) {
    int x = 10;
    printf( "%f\n", myproc(x) );
    
    return 0;
}
