#include<stdio.h>
#include<string.h>
#include"3-person.h"  /* Here we need to include .h to get Person definition Type */



void formInit( Person* person_array, size_t nbr ) {
    int i ;
    for( i = 0; i < nbr; i++ ) {
        strcpy( person_array[i].nom, "" ) ;  /* we need strcpy for handle array in array of struct */
        strcpy( person_array[i].prenom, "" ) ; /* assignment because int tab we are still dealing with adress */
        person_array[i].age = 0 ;
        strcpy( person_array[i].adresse, "" ) ;
        person_array[i].genre = 0 ;
    }
}

void formWrite( Person* person_array, size_t nbr ) {
    int i;
    for( i = 0; i < nbr ; i++ ) {
        printf( "Veuillez indiquer votre nom: ") ;
        scanf( "%s", person_array[i].nom ); /* with scanf handle like strcpy, but is person_array[i].nom an adress ? */ 
        printf( "\nveuillez indiquer votre prénom : " ) ;
        scanf( "%s", person_array[i].prenom) ;
        printf( "\n" ) ;
    }

}

void formRead( Person* person_array, size_t nbr ) {
    int i = 0 ;
    for( i = 0; i < nbr ; i++ ) {
        printf( "Nous avons : %s %s.\n", person_array[i].prenom, person_array[i].nom );
    }
}
