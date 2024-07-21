// Complete the following program to defining an integer pointer that points to a variable a.
// Then, copy the value of variable b into a using pointer p.
// Sample Input
// 1
// 2
// Output
// 2
// 2

#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    // write your code here
    int *p = &a;
    *p = b;


    printf("%d\n%d", a, *p);
    return 0;
}