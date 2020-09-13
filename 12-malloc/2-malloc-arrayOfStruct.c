#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Player Player;
struct Player
{
    char tag[8]; /* tag's length is fixed for all player -> Stack memory */
    int age;
};
void* allocatePlayers( Player* players, const int number_players );
void initPlayers( Player* players, const int number_players );
void printPlayers( Player* players, const int number_players );
void setOnePlayer( Player* one_player, char* pseudo, int age );
void setPlayers( Player* players, const int number_players );

int main( int argc, char** argv )
{
    Player* players = NULL;
    int number_players;
    printf( "Veuillez indiquer le nombre de joueur : " );
    scanf( "%d", &number_players );
    players = allocatePlayers( players, number_players );
    printPlayers( players, number_players );
    setOnePlayer( &(players[1]), "Player1", 18 );
    printPlayers( players, number_players );
    setPlayers( players, number_players ); 
    printPlayers( players, number_players );

    free( players ); 
    
    return 0;
}

void* allocatePlayers( Player* players, const int number_players ) /* I needed to do a void* return to keep allocation in main program */
{
    players = malloc( number_players * sizeof( Player ) ); /* array of struct Players */
    if ( players == NULL )
    {
        printf( "Error occured during allocation memory for Players");
        exit( 0 );
    }
    /* printf( "taille de Players : %lu.\n", number_players * sizeof( Player ) ); */
    initPlayers( players, number_players );
    return players;
}

void initPlayers( Player* players, const int number_players )
{
    int i;
    for ( i = 0; i < number_players; i++ )
    {
        strcpy( players[i].tag, "" );
        players[i].age = 0;
    }
}

void printPlayers( Player* players, const int number_players )
{
    int i;
    for ( i = 0; i < number_players; i++ )
    {
        printf( "Joueur %d, Tag: %s; age: %d .\n", (i + 1), players[i].tag, players[i].age );
    }
}

void setPlayers( Player* players, const int number_players )
{
    int i;
    printf( "Veuillez renseigner les joeurs : \n");
    for ( i = 0; i < number_players; i++ )
    {
        char pseudo[8] = "";
        int age = 0;
        printf( "renseigner le pseudo du joueur %d : ", (i + 1) );
        scanf( "%s", pseudo );
        printf( "\nrenseignez l'age du joueur %d : ", (i + 1) );
        scanf( "%d", &age );
        printf( "\n" );

        setOnePlayer( &players[i], pseudo, age  );
    }
}

void setOnePlayer( Player* one_player, char* pseudo, int age )
{
    strcpy( one_player->tag, pseudo );
    one_player->age = age; 
}
