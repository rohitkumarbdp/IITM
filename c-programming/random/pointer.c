#include<stdio.h>

int main(){
    
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    for(int i= 0; i<10;i++){
        // Both the below line give the same output
        printf("A[%d] = %d\n", i, &A[i]);
        printf("*(A+ %d) = %d\n", i, (A+i));
    }
    return 0;
}