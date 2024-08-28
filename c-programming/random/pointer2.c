#include <stdio.h>
int main(){
    int a= 42;
    printf("Value of a : %d\n", a); // value of variable
    printf("Address of a as hex: %p\n", &a); // prints address of a in hex
    printf("Address of a as int : %d\n", &a); // prints address of a as int

    int*b = &a;
    printf("Value of b: %p\n", b); // prints the address of a as hex
    printf("Value of a : %d\n", *b);// *b is dereferenced value of b which is actual value stored
                                    // at a
    *b = 100;

    printf("New value of a: %d\n", a); // prints 100;
    printf("New value of a: %d\n", *b);// prints 100;

    



    return 0;


}