// Write a C program that takes the principal amount, interest rate (annual percentage), 
// the number of years, and the number of times interest is compounded per year as input. 
// Calculate the amount (including interest) after every year using the given formula for compound interest:
// Where:
// - A is the final amount (as a decimal).
// - P is the principal amount (as a decimal).
// - r is the annual interest rate in percent (as a decimal).
// - t is the number of years (as an integer).
// - n is the number of times interest is compounded per year (as an integer).

// Print the final amount (including interest) as double up to two decimal point after every year until the specified number of years.
// Input Format
// First line - the principal amount P as double.
// Second line - will be the interest rate (annual percentage) r as double.
// Third line - will be the number of years t as integer.
// Fourth line - will be the number of times interest is compounded per year n as integer.

// Output Format
// The next t lines will have final amount (including interest) as double up to two decimal point after every year i from 1 to t.


#include<stdio.h>
#include<math.h>

int main(){
    double P, r , A;
    int t, n;
    scanf("%lf %lf %d %d", &P, &r, &t, &n);
    for(int i=1; i<t+1; i++){
        A = P*pow((1+r/(100*n)),n*i);
        printf("%.2lf\n",A);
    }
    return 0;
}