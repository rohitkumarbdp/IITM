// Write a C program to calculate the sum of the first n odd numbers. 
// The program must take an integer input from the user in a variable n, 
// and calculate the sum of the first n odd numbers. The program must also print the integer output as shown below.

// Sample Input

// 5
// Output

// 25

#include<stdio.h>
int main(){
    int n, sum;
    scanf("%d", &n);
    sum = 0;
    int step = 1;

    for(int i=0; i<n; i++){
        sum +=step;
        step +=2;
    }
    printf("%d", sum);
    return 0;
}