#include<stdio.h>

typedef struct Person Person ;
struct Person
{
    char nom[50] ;
    char prenom[50] ;
    int age ;
};


int main( int argc, char** argv ) {

    Person vincent = { "Garcia", "Vincent", 47 };
    printf(" Infos pour vincent : Person{ %s, %s, %d }\n", vincent.nom, vincent.prenom, vincent.age );

    return 0 ;
}
