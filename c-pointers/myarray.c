#include<stdio.h>

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
	for( i = 0; i < tailleTableau ; i++ ) {
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

void ordonnerTableau( int* tableau, size_t tailleTableau ) {
    int  i;
    int a = 0, b = 0;
    do {
        for( i = 0; i < tailleTableau - 1; i++ ) {
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

int valeurMaxTableau( int* tableau, size_t tailleTableau ) {
    int max = 0;
    int i;
    for( i = 0; i < tailleTableau; i++ ) {
        max = ( tableau[i] > max ) ? tableau[i] : max; /*ternary for affectation */
    }
    return max;
}

int* pointeurMaxTableau( int* tableau, size_t tailleTableau ) {
    int max = 0;
    int index = 0;
    int i;
    for( i = 0; i < tailleTableau; i++ ) {
        if ( tableau[i] > max ) {
            index = i;
            max = tableau[i];
        }
    }
    printf( "%d", index ); /*debug*/
    return &tableau[index];
    
}

