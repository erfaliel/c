#include<stdio.h>
#include<string.h>

int main( int argc, char** argv ) {
    char prenom[30]; /* we don't know the length, I thougth 30 was enough */
    size_t longueur = 0; /* you have to read documentation to know that string::length return a size_t (int is good too) */
    printf( "Veuillez entrer votre prenom : " );
    scanf( "%s", prenom );
    longueur = strlen( prenom ); /* the difference between just an array and string, is a sting is \0 terminated */
    /* it is easy to check the length  */
    printf( "\nBonjour %s, comment vas-tu ?", prenom ); 
    printf( "\n, ton prénom comporte %lu caractères.\n", longueur );
    return 0;
}
