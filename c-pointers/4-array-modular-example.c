#include<stdio.h>
#include"myarray.h"

int main ( int argc, char** argv ) {
		int tableau[] = { 4, 5, 7, 10, 6, 23, 18, 57, 0, 3 } ;
		size_t taille_tableau = ( sizeof( tableau ) / sizeof( int ) ) ;
        int tableau_copy[10] = {0} ;
        int max;
        int* pmax = NULL;
		printf( "La somme des éléments du tableau est: %d.\n", sommeTableau( tableau, taille_tableau ) );
		printf( "la moyenne des éléments du tableau est : %f.\n", moyenneTableau( tableau, taille_tableau ) );
	    printf( "affichage du tableau : " ) ;
        afficherTableau( tableau, taille_tableau );
        printf( "préparation du tableau_copy : " );
        afficherTableau( tableau_copy, taille_tableau );
        copie( tableau, tableau_copy, taille_tableau );
        printf( "Le tableau_copy devient : " );
        afficherTableau( tableau_copy, taille_tableau );
        printf( "Le tableau_copy est filtré par la fonction max à 7: " );
        maxTableau( tableau_copy, taille_tableau, 7 );
        afficherTableau( tableau_copy, taille_tableau );
        printf( "Ordonner tableau : " );
        ordonnerTableau( tableau, taille_tableau );
        afficherTableau( tableau, taille_tableau );
        printf( "Trouver la valeur max d'un tableau: " );
        max = valeurMaxTableau( tableau, taille_tableau );
        printf( "%d.\n", max );
        printf( "on retourne le pointeur de la valeur max du tableau copy :" );
        pmax = pointeurMaxTableau( tableau_copy, taille_tableau );
        printf( " le pointer pointe sur %p qui pointe sur la valeur: %d.\n", (void* )pmax, *pmax );

        return 0;
}

