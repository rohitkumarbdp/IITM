#include<stdio.h>
void demo_ptr_align(){
    int a = 0x12345678; // Define an integer variable with a hexadecimal value
    int b = 0xabcdef01;
    
    // printf("Decimal number a: %d\n", a);
    // printf("Address of a: %08lX\n", (long *)&a);  // hex with 8 figurs
    // printf("Decimal number b: %d\n", b);
    // printf("Address of b: %08lX\n", (unsigned long *)&b);  // hex with


    char *c = (char *)&b;  // now c is pointer to to b
    printf("%p\n", c);  // pointer to b
    printf("%p\n", &b);  // Pointer to b

    char *d = c+2;
    printf("%p\n", d);
    int *p = (int *)(d);
    printf("p (%08lX) = %08lX\n", (unsigned long)p, (unsigned long)*p); 
}

void demo2(){
    int x = 43;
    int* ptr = &x;
    printf("The actual integer x: %d\n", x);
    printf("Pointer of x: %p\n",(void*) ptr); // will give the pointer value in hex
    printf("This is also pointer: %p\n", &x);
    printf("Value pointed to by ptr: %d\n", *ptr); // Dereferencing pointer to print value
}
int main(){
    demo_ptr_align();
    demo2();
    return 0;
}