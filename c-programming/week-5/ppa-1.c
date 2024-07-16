// write a function which takes n as argument and returns factorial

#include <stdio.h>

int fact(int n){
    if(n==1){
        return 1;
    } else{
        return n*fact(n-1);
    }
}

int main() {
    int a;
    long int result;
    scanf("%d", &a);    
    result = fact(a);
    printf("%ld", result);
    return 0;
}