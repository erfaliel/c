#include<stdio.h>
#include"3-person.h"

#define NUMB_OF_PERS 3 /* preprocessor as a config to test */

int main( int argc, char** argv ) {

    Person person_array[NUMB_OF_PERS] ;

    formInit( person_array, NUMB_OF_PERS ) ;
    printf( "Vérification initialisation : Person{%s, %s, %s, %d, %d}\n",
            person_array[2].nom,
            person_array[2].prenom,
            person_array[2].adresse,
            person_array[2].age,
            person_array[2].genre ) ; 
    formWrite( person_array, NUMB_OF_PERS ) ;
    formRead( person_array, NUMB_OF_PERS ) ;

    return 0 ;
} 
