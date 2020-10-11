#include<stdio.h>
#include<ctype.h>
#include "random-word.h"

#define LINE_MAX_SIZE 26
#define FILE_PATH "dico"

typedef enum
{
    FALSE, TRUE
} Boolean;

int myStrlen( const char* string ) ;
char* strAppend( char* string, char c );
char readChar();
Boolean findChar( const char* str, char c );
void checkParseWord( const char* found_chars, char* char_user, char c );
char* buildWordUser( const char* word_game, char* word_user, char* found_chars );
Boolean checkEndGame( const char* word_game, char* word_user, int* try );
Boolean strComp( const char* string1, const char* string2 );
void myStrSuprEndLine ( char* string );

int main( int argc, char** argv )
{
    char word_game[LINE_MAX_SIZE] = ""; /* limit in size word, mandatory for fgets */
    char char_user = 0;         /* char user selection */
    Boolean is_in_str = FALSE;  /* good result detection */
    Boolean end_game = FALSE;
    char found_chars[LINE_MAX_SIZE] = "";  /* list of char for good result detection by user*/
    char word_user[LINE_MAX_SIZE] = "";    /* Build Word found by user from found_chars list */
    int try = 1;
    /* char* test = "MARRON"; */
    
    wordGameFromFile( FILE_PATH, word_game ); /* wordGameFromFile library call */
    myStrSuprEndLine( word_game ); /* suppress '\n' en char from file */
    puts( "Bienvenue dans le jeu du pendu, vous devez trouver le mot cahché.\n" );
    do
    {
        printf( "Vous en êtes à votre essai %d sur 10.\n", try );
        puts( "Veuillez saisir une lettre : " );
        char_user = readChar(); /* get the first char */
        /* printf( "vous aves saisi : %c.\n", char_user ); */
        is_in_str =    findChar( word_game, char_user )
                    && !( findChar( found_chars, char_user ) );
        /* printf( " La lettre est présent dans le mot : %d.\n", is_in_str );*/
        if ( is_in_str )
        {
            strAppend( found_chars, char_user );
            try--;
        }

        /* printf( " la liste des lettres recherchées est : %s\n", found_chars ); */
        /* printf( "DEBUG: the length is now : %d\n", myStrlen( found_chars) );*/
        buildWordUser( word_game, word_user, found_chars );
        printf( "%s\n", word_user );
        end_game = checkEndGame( word_game, word_user, &try );
        if ( end_game )
        {
            break; /* to leave while loop */
        }
    } while (try <= 10);
    
    printf( "Fin de la partie.\n" );
    return 0;
}

char readChar() /* read only one char from user */
{
    char one_char = 0;
    one_char = getchar(); /* get char from the user one by one */
    while ( getchar() != '\n' ); /* here ; replace void bracket {} => do nothing */
    /* when user type its char et make an `enter key` validation so we need to drope this "\n" char */
    return toupper( one_char ); /* return the very first char */
}

/* I should build  my own string library */
Boolean findChar( const char* str, char c )
{
    int i = 0;
    while ( str[i] ) /* is the same as ( str[i] != '\0' ) */
    {
        if ( c == str[i] )
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}

int myStrlen( const char* string ) { /* make MyStrLib */
	int length = 0 ;
	char current = 0 ;
	do {
	current = string[length] ;
	length++ ;
	} while( current != '\0' ) ;
	
	return length-- ; /* we need to substract `\0` char */
}

char* strAppend( char* string, char c ) /* make MyStrLib */
{
    int length = myStrlen( string );
    /*printf( "DEBUG: length string is %d | char is :%c\n", length, c );*/
    string[length-1] = c;
    string[length] = '\0';

    return string;
}

Boolean strComp( const char* string1, const char* string2 ) /* make MyStrLib */
{
    int i = 0;
     if ( myStrlen( string1 ) != myStrlen( string2 ) ) /* fist try to compare length */
     {
         return FALSE;
     }
     do
     {
         if ( string1[i] != string2[i])  /* check every  char is egual */
         {
             return FALSE;
         }
         i++;
     } while ( string1[i] );
     return TRUE;}

char* buildWordUser( const char* word_game, char* word_user, char* found_chars )
{
    int i = 0;
    while ( word_game[i] )
    {
        checkParseWord( found_chars, &word_user[i], word_game[i] );
        i++;
    }
    /* printf( "DEBUG: HMG::buildWordUser func > word user is %s\n", word_user ); */
    return word_user;
}

void checkParseWord( const char* found_chars, char* char_user, char c )
{
    int i = 0;
    *char_user = '*';
    /* printf( "DEBUG: le caractère est %c\n", c );*/
    while ( found_chars[i] ) /* == while ( found_chars[i] != '\0' ) */
    {
        if ( found_chars[i] == c )
        {
            *char_user = c;
            break;
        }
        i++;
        /*printf( "DEBUG: compteur i vaut : %d\n", i);*/
    }
}
Boolean checkEndGame( const char* word_game, char* word_user, int* try )
{
   if ( strComp( word_game, word_user ) )
   {
       return TRUE;
   }
   *try = *(try) + 1;
   return FALSE;
}
void myStrSuprEndLine ( char* string ) /* make MyStrLib */
{
    int i = 0;
    do
    {
        if ( *(string + i) == '\n' ) /* the same as string[i] == '\n' */
        {
            *(string + i) = '\0';
            break;
        }
        i++;
    } while ( *(string + i) != '\0' );
   /* the same as string[strlen(string) - 1] = '\0'; 
}


