#include<stdio.h>

int main( int argc, char** argv ) {

    /* ususally a struct is design into a .h file with function prototypes */
    /* define new struct */
    struct Point {  /* Point means 2D geographic point */
        int x;
        int y;
    }; /* ';' is mandatory */

    /* How to use this strucht - this part is into a function in a file .c */
    struct Point my_point; /* variable declaration from struct prototype */
    my_point.x = 0 ;
    my_point.y = 5 ;

    printf( "my structure is like a new type, and my_point is : my_point{X: %d, Y: %d}\n",
            my_point.x, my_point.y ) ;
    return 0 ;
}
