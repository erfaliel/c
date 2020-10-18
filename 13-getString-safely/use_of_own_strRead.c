#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strRead.h"

#define LENGTH 10
 
int main(int argc, char *argv[])
{
    char name[LENGTH] = {0};
    int error = 0; /* error staturs where 0 is no error */
 
    printf( "Quel est votre nom ? " );
    error = strRead( name, LENGTH );
    printf( "Ah ! Vous vous appelez donc %s !\n\n", name );
    if ( error )
    {
        puts( "Erreur de saisie" );
    }

    printf( "Quel est votre nom ? " );
    error = strRead( name, LENGTH );
    printf( "Ah ! Vous vous appelez donc %s !\n\n", name ); 
 
    return 0;
}
