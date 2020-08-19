#include<stdio.h>

int sommeTableau( int* tableau, size_t tailleTableau);
float moyenneTableau( int* tableau, size_t tailleTableau );
void afficherTableau( int* tableau, size_t tailleTableau );
void copie( int* tableauOrigine, int* tableauCopie, size_t tailleTableau );
void maxTableau( int* tableau, size_t tailleTableau, int max );
void ordonnerTableau( int*tableau, size_t tailleTableau );

int main ( int argc, char** argv ) {
		int tableau[] = { 4, 5, 7, 10, 6, 23, 18, 57, 0, 3 } ;
		size_t taille_tableau = ( sizeof( tableau ) / sizeof( int ) ) ;
        int tableau_copy[10] = {0} ;
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
}

int sommeTableau( int* tableau, size_t tailleTableau ) {
	int i ;
	int somme = 0 ;
	for( i = 0; i < tailleTableau; i++ ) {
		somme += tableau[i];
	}
	return somme ;
}

float moyenneTableau( int* tableau, size_t tailleTableau ) {
    float somme = ( sommeTableau( tableau, tailleTableau ) );
	return ( somme / tailleTableau );
}

void copie( int* tableauOrigine, int* tableauCopie, size_t tailleTableau ) {
	int i;
	for( i = 0; i < tailleTableau; i++) {
		tableauCopie[i] = tableauOrigine[i];
	}
}

void afficherTableau( int*tableau, size_t tailleTableau ) {
	int i;
	printf( "{ " );
	for( i = 0; i < tailleTableau; i++ ) {
		printf( "%d, ", tableau[i] );
	}
	printf( "}\n");
}

void maxTableau( int* tableau, size_t tailleTableau, int max ) {
    int i;
    for( i = 0; i < tailleTableau; i++ ) {
        if( tableau[i] >= max ) {
            tableau[i] = 0;
        }
    }
}

void ordonnerTableau( int*tableau, size_t tailleTableau ) {
    int  i;
    int a, b;
    do {
        for( i = 0; i < tailleTableau; i++ ) {
            a = tableau[i];
            b = tableau[i + 1];
            if( b < a ) {
                tableau[i + 1] = a;
                tableau[i] = b;
                break;
            }
        }
    }while ( ( i + 1 ) < tailleTableau );
}
