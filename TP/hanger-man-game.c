#include<stdio.h>
#include<ctype.h>

typedef enum
{
    FALSE, TRUE
} Boolean;

const char* word_game = "MARRON";
int myStrlen( const char* string ) ;
char* strAppend( char* string, char c );
char readChar();
Boolean findChar( const char* str, char c );
void checkParseWord( const char* found_chars, char* char_user, char c );
char* printWordUser( const char* word_game, char* word_user, char* found_chars );

int main( int argc, char** argv )
{
    char char_user = 0;         /* char user selection */
    Boolean is_in_str = FALSE;  /* good result detection */
    char found_chars[25] = "";  /* list of char for good result detection */
    char word_user[25] = "";    /* Word found by user */
    int try;
    printf( "Bienvenue dans le jeu du pendu, vous devez trouver le mot: MARRON.\n" );
    for ( try = 0; try <= 10; try++ )
    {
        printf( "Veuillez saisir une lettre : " );
        char_user = readChar(); /* get the first char */
        printf( "vous aves saisi : %c.\n", char_user );
        is_in_str =    findChar( word_game, char_user )
                    && !( findChar( found_chars, char_user ) );
        printf( " La lettre est présent dans le mot : %d.\n", is_in_str );
        if ( is_in_str )
        {
            strAppend( found_chars, char_user );
        }

        printf( " la liste des lettres recherchées est : %s\n", found_chars );
        printf( "DEBUG: the length is now : %d\n", myStrlen( found_chars) );
        printWordUser( word_game, word_user, found_chars );

    }
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

int myStrlen( const char* string ) {
	int length = 0 ;
	char current = 0 ;
	do {
	current = string[length] ;
	length++ ;
	} while( current != '\0' ) ;
	
	return length-- ; /* we need to substract `\0` char */
}

char* strAppend( char* string, char c )
{
    int length = myStrlen( string );
    printf( "DEBUG: length string is %d | char is :%c\n", length, c );
    string[length-1] = c;
    string[length] = '\0';

    return string;
}

char* printWordUser( const char* word_game, char* word_user, char* found_chars )
{
    int i = 0;
    while ( word_game[i] )
    {
        checkParseWord( found_chars, &word_user[i], word_game[i] );
        i++;
    }
    printf( "%s", word_user );
    return word_user;
}

void checkParseWord( const char* found_chars, char* char_user, char c )
{
    int i = 0;
    *char_user = '*';
    printf( "DEBUG: le caractère est %c\n", c );
    while ( found_chars[i] ) /* == while ( found_chars[i] != '\0' ) */
    {
        if ( found_chars[i] == c )
        {
            *char_user = c;
            break;
        }
        i++;
        printf( "DEBUG: compteur i vaut : %d\n", i);
    }
}



