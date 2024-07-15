// You are given principal, rate, and time as double value. 
// Calculate the simple interest and store the result in the double variable simpleInterest.
// Complete the program as per the given problem statement.

// Sample Input

// 1000 5 10
// Output

//500.00

#include <stdio.h>

int main(){
    double principal, rate, time;
    printf("Enter Principal , rate and time: \n");
    scanf("%lf%lf%lf", &principal, &rate, &time);
    double simpleInterest = (principal * rate * time) / 100;
    printf("Your Simple interest is: %.2lf", simpleInterest);
    return 0;
}
