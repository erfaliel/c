#include<stdio.h>

/* Once again this part should be in file.h library whith function protoypes */

typedef struct Point2D Point2D ; /* means : create alias for a new type.
                                    So second Point2D is an alias of `Struct Point2D` */
struct Point2D {    /* notice we put a `Maj P` by convention */
    int x ;
    int y ;
}; /* `;` is mandatory */

int main( int argc, char** argv ) {

    Point2D my_point ; /* thanks to typedef, Point2D is a type declaration as int, char,… */

    my_point.x = 4 ;  /* Assignement */
    my_point.y = 2 ;

    /* now you can use it */
    printf( "I can use my new type Point2D: my_point{X: %d, Y: %d}\n", my_point.x, my_point.y ) ;
    
    return 0 ;
}
