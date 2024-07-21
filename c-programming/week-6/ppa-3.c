// Write a function get_char that accepts two parameters: the address of the first character
// of a string s, and an integer k which represents the position of the character in the string.
// The function returns the kth character in string s from left.

// Example:
// If s = abcdef and k = 2 then output should be b (2nd character from left).
// Note:- Consider that position start with 1 and all character are located in
// continuous memory location and maximum length of the string is 100.

// Sample Input
// hello
// 2
// Output
// e

#include<stdio.h>
//Write function below
char get_char(char *s, int k){

    // printf("%c\n", *s);  // just for testing

    return s[k-1];
}
int main()
{
    int n;
    char a[100]; 
    scanf("%s",a);
    scanf("%d",&n);
    printf("%c",get_char(&a[0],n));
    return 0;
}