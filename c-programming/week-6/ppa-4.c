// Write a C program that does the following.
// 1. Reads an 8-digit hexadecimal number as input and stores it in an unsigned integer variable a.
// 2. Prints the decimal value of a as an unsigned integer.
// 3. Prints the decimal value of a as a (signed) integer.

// Input:
// An 8-digit hexadecimal number.
// Output:
// The decimal value of the input number as an unsigned int.
// The decimal value of the input number as a (signed) int.
// Sample Input:
// ffffffff
// Sample Output:
// 4294967295
// -1


#include<stdio.h>

void main(){
    unsigned int a;
    scanf("%x", &a);
    printf("%u\n", a);
    printf("%d",a);
}