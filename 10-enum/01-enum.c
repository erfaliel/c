#include<stdio.h>

/* typedef enum Log Log ;  new alias to mimic type : but we cannot do this in c89 with pedantic */
enum Log
{
    INFO, WARNING, ERROR, FATAL
};
enum Volume
{
    MUET = 0, FAIBLE= 25 , MOYEN = 60, FORT = 100 /* if you need to bind with a spec (% here) */
};

int main( int argc, char** argv ) {
    enum Log alarm = ERROR ;
    enum Volume musique = FAIBLE;

    printf( "The log trace is: %d !\n", alarm ); /* as you can see, Enum type is an int */
    switch (alarm)
    {
    case FATAL:
        puts( "Make Alarme and Call everyone\n " );
        break;
    case ERROR:
        puts( "Make an Alarme and open a case\n" );
        break;
    case WARNING:
        puts( "may you have to pay attention, maybe not…\n" );
        break;
    default:
        break;
    }

    printf( "Music's volume is : %d %%.\n", musique ); /* %% to escape %… */

    return 0 ;
}
