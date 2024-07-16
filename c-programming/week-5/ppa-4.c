// The Fibonacci series is an infinite series, starting from 0 and 1, in which every
// number in the series is the sum of two numbers preceding it in the series

// For example:- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...

// Where the 0th Fibonacci number is defined as 0 and the 1st Fibonacci number is defined as 1 and so on.
// To complete the given C program, write a recursive function nth_fibonacci that accepts a non-negative integer
// input n and return the nth Fibonacci number.

// Sample Input
// 6
// Output
// 8


#include <stdio.h>

int nth_fibonacci(int n){
    if(n==0){return 0;}
    else if (n==1){return 1;}
    else{ return nth_fibonacci(n-1)+nth_fibonacci(n-2);}
}

int main() 
{
    int n;
    scanf("%d",&n);
    printf("%d",nth_fibonacci(n));
    return 0;
}