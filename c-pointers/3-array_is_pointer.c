#include<stdio.h>

int main( int argc, char** argv ) {
    /* int my_array1[4] ; */  /* array init. with 4 contigues cell in memory */
    int my_array1[4] = {0, 1, 2 ,3} ; /* array init with values */
    long my_array2[4] = {0} ; /* array init with all values set to 0 */
    float my_array4[4] = {1, 2} ; /* array init with first element at 1, second at 2 and others to 0 */
    int i ; /* for loop usage */
    /* when array is init the value between can't be a var, only numeric because the size in memory must be fixed at compile time */


    printf( "adress in memory for my_array1 is %p.\n", (void*)my_array1 ) ; /* because my_array1 name is a pointer */
    printf( " *my_array1 == my_array1[0] is : %d.\n", ( *my_array1 == my_array1[0] ) ) ;
    printf( " *my_array1 == my_array1[0] is : %d.\n", ( *(my_array1 + 2) == my_array1[2] ) ) ; /* because array is always a pointer */
    printf( "size of my_array1 is : %lu, because array of int.\n", sizeof( my_array1 ) ) ; /* I am using %lu because sizeof return a %lu */
    printf( "size of my_array2 is : %lu, because array of long.\n", sizeof( my_array2 ) ) ;
    printf( "size of my_array4 is : %lu, because array of float.\n", sizeof( my_array4 ) ) ;
    printf( "cell's size of my_array1 is : %lu.\n", sizeof( my_array1[0] ) ) ;
    printf( "cell's size of my_array2 is : %lu.\n", sizeof( long ) ) ; /* other way because we know the type into the array */
    printf( "so, size of my_array1 / size of int give us elements array number: %lu.\n", 
            (  sizeof( my_array1 ) / sizeof( my_array1[0] ) ) ) ;
    printf( "So, size of my_array2 / size of long give us array elements number: %lu.\n",
            ( sizeof( my_array2 ) / sizeof( long ) ) ) ; /* a better way */
    printf( "let use for loop to read every element of an array:\n" ) ;
    for( i = 0; i < 4; i++ ) {           /* 4 is the number of element, you can know it with sizeof array / sizeof int */
        printf( "%d\n", my_array1[i] ) ; /* you can use i as identifier because it is not an array initialisation */
    }
    
    return 0 ;
}
