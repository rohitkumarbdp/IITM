// To complete the given C program, write a recursive function Write a recursive function sumNaturalNumbers
// that accepts a positive integer N as input and returns the sum of all natural numbers from 1 to N.
// Sample Input
// 10
// Output
// 55

#include <stdio.h>

int sumNaturalNumbers(int n){
    if(n==1){
        return 1;
    }else{
        return sumNaturalNumbers(n-1)+n;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    if (N < 1) {
        printf("Invalid input: Please enter a positive integer.\n");
    } else {
        printf("%d\n", sumNaturalNumbers(N));
    }
    return 0;
}