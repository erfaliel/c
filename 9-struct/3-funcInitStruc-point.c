#include<stdio.h>

typedef struct Point Point ;
struct Point {
    int x ;
    int y ;
} ;

void initPoint( Point* point ) ;

int main( int argc, char** argv ) {
    Point point ;
    initPoint( &point ) ; /* we are using a pointer on a struct (to avoid a copy) */
    printf( "person est initialisée à : Person{ X: %d, Y: %d}\n", point.x, point.y );

    return 0 ;
}
void initPoint( Point* point ) {
    point->x = 1 ; /* semantic is the same as `(*point).x = 1` parantheses because `.` get priority */
    point->y = 1 ;
}
