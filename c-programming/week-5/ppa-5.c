// To complete the given C program, write a function nth_digit that accepts two integers
// "num" and "n" and returns the nth digit of the number num (from right to left).
// If n is greater than the number of digits or less than or equal to 0, return -1.

// Sample Input
// 12345 2
// Output
// 4

#include <stdio.h>

int nth_digit(int num, int n){
    if(n<1){
        return -1;
    }

    if (num == 0) {
        return (n == 1) ? 0 : -1;
    }

    for(int i= 1; i<n;i++){
        if(num/10==0){
            return -1;
        }
        num = num/10;
    }
    return num%10;
}
int main(){
    int num, n;
    scanf("%d %d", &num, &n);
    printf("%d", nth_digit(num, n));
}