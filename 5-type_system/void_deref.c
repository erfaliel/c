#include<stdio.h>

int main(void) {
    int a = 10;
    void* pa = &a;  /* pa is the adress of the pointer that is pointing on no mater the type */

    printf( "%d\n", *( (int*) pa ) ); /*   ` (int*) pa ` say : now pa is a pointer on integer, so  *( (int*) pa ) is the value pointed by the pointer on integer pa */
    return 0;
}
