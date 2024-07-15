// Write a program that accept an integer n and print the factorial of n.

// Sample Input
// 5
// Output
// 120

#include<stdio.h>

int main(){
    int n , fact;
    scanf("%d", &n);
    fact = 1;
    for(int i=n;i>0; i--){
        fact = fact *i;

    };
    printf("Factorial of %d is:  %d", n, fact);
}