#include <stdio.h>

int main(void){
    /* The lesser types */
    unsigned char x = 100, y = 100, z = 100;
    unsigned char r = x + y + z; /* will give you 300 % 256 = 44 */
    printf( " A this point r =%i\n", r );

    unsigned int r_int = x + y + z; /* equals to 300, because the promotion to integers is performed first */
    printf( " A this point r_int=%i\n", r_int );

    /* Now with the greater types */
    unsigned int xl = 1e9, yl =2e9, zl= 3e9;
    unsigned int rl_int = xl + yl + zl; /* 1705032704 equasl 600000000000 % (2^32) */
    unsigned long rl_long = xl + yl + zl; /* the same result */
    printf( "At this point rl_int=%u\n", rl_int );
    printf( "with rl_long =       %lu\n", rl_long );
}
