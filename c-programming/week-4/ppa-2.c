// Write a program to check if a given year is a leap year or not.
// Accept the integer value of Y as input and print Y is a leap year if Y is leap year,
// otherwise, print Y is not a leap year.

// Sample Input
// 2023
// Output
// 2023 is not a leap year

#include<stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if(year%100==0){
        (year%400==0)?printf("%d is a leap year", year):printf("%d is not a leap year", year);
    } else{
        (year%4==0)?printf("%d is a leap year",year):printf("%d is not a leap year", year);

    };
    return 0;
}