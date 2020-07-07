#include <stdio.h>

int f(void) { puts( "F" ); return 0; }
int g(void) { puts( "G" ); return 1; }

int main(void) {
    f() && g();      /* first element return 0 so the second is not executate (lazy and) */
    return 0;
}
