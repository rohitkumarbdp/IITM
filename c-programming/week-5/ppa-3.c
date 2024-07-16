// A positive integer m is a prime product if it can be written as p × q, where p and q are both primes.

// To complete the given C program, write a function prime_product that accepts a positive integer m as input
// and returns 1 if m is a prime product and 0 otherwise.
// Sample Input
// 10

// Output
// 10 is a prime product

// Explanation
// 10 is product of two prime number 2 and 5.


#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    else if(n==2){return 1;}
    else{
        for(int i=2;i<n/2+1;i++){
            if (n%i==0){
                return 0;
            }
        }
        return 1;
    }
}

int prime_product(int n){
    for(int i =2;i<n/2+1;i++){
        if(n%i==0 && isPrime(i) && isPrime(n/i)){
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int m;
    scanf("%d",&m);
    if (prime_product(m)==1)
    {
        printf("%d is a prime product",m);
    }
    else{printf("%d is not a prime product",m);}
    return 0;
}