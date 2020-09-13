#include<stdio.h>
#include<stdlib.h>   /* required for malloc and free functio */

int main( int argc, char** argv )
{
    /* malloc prototype : void* malloc( size_t numberOfBytes); */
    int* memory_allocation = NULL; /* init au NULL pointer */

    memory_allocation = malloc( sizeof( int ) ); /* returned type from sizeof is size_t */

    if ( memory_allocation == NULL )
    {
        exit( 0 ); /* exit program : memory allocation issue is too critical */
    }

    printf("Quel est votre age ? ");
    scanf( "%d", memory_allocation ); /* memory allocation is a memory adress */
    printf( "Vous avez %d ans.\n", *memory_allocation );
    free( memory_allocation ); /* mandatory : You have to freed alocated memory (pointer descriptor on memory)*/

    return 0;
}

                        
