#include<stdio.h>

int main(void) {
    int label_on_my_value = 13 ;
    int* pointer_on_my_label = &label_on_my_value ;
    printf( "my value %d, has a label name: label_on_my_value,", label_on_my_value );
    /* printf( "%x\n", (int)&label_on_my_value ) ; */
    /* printf( "%p\n", (void*)pointer_on_my_label ) ; */
    /* printf( "%d\n", *pointer_on_my_label ) ; */
    printf( "label_on_my_value that is a name for the memory adress: %x.\n", (int)&label_on_my_value ) ;
    printf( "pointer_on_my_value is a label (a name) that contain the adresse : %p, of label_on_my_value.\n",
            (void*)pointer_on_my_label ) ; 
    printf( "* is an instruction to read the adress contained in pointer_on_my_value and get the value contained, at this adress : %d.\n", *pointer_on_my_label ) ;

    return 0 ;
}
