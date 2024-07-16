// EvenOdd is a tech startup. Each employee at the startup is given an employee id which is a unique positive integer.
// On one warm Sunday evening, five employees of the company come together for a meeting and sit at a circular table:
// The employees follow a strange convention. They will continue the meeting only if the following condition is satisfied.
// The sum of the employee-ids of every pair of adjacent employees at the table must be an even number.
// They are so lazy that they won't move around to satisfy the above condition. If the current seating plan doesn't satisfy the condition, the meeting will be canceled. You are given the employee-id of all five employees. Your task is to decide if the meeting happened or not.
// Write a program that accept five integer input which represent employee ids of and 
// respectively. The output will be a single line containing one of these two strings: YES or NO.
// Sample Input
// 1 2 3 4 5
// Output
// NO

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int a, b, c,d,e;
//     scanf("%d%d%d%d%d", &a, &b, &c,&d,&e);
//     int arr[5] = {a,b,c,d,e};
//     int len = (sizeof(arr)/sizeof(arr[0]));
//     bool ans = true;
//     for(int i =0; i<len; i++){
//         if(i!=(len-1) && (arr[i]+arr[i+1])%2!=0){
//             ans = false;
//             break;
//         }else if ((arr[i]+arr[0])%2!=0){
//             ans = false;
//             break;
//         }
//     }
//     (ans==true)?printf("YES"):printf("NO");
//     return 0;
// }


#include<stdio.h>
#include<stdbool.h>

int main(){
    int a, b, c,d,e;
    scanf("%d%d%d%d%d", &a, &b, &c,&d,&e);
    ((a+b)%2==0 && (b+c)%2==0 && (c+d)%2==0 && (d+e)%2==0 && (a+e)%2==0)?printf("YES"):printf("NO");
    return 0;
}