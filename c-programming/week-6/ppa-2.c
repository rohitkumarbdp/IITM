// Write a function calculate_sum that takes three parameters: integer a, integer b
// and integer pointer p. It should calculate the sum of a and b and assigns 
// the sum to the pointer variable p.
// Sample Input
// 1
// 2
// Output
// 3


#include <stdio.h>
//Write function below
void calculate_sum(int a, int b, int *p){
    *p = a+b;
}

int main() 
{
    int a, b, c = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    calculate_sum(a, b, &c);
    
    printf("%d", c);
    
    return 0;
}