#include<stdio.h>

void sortArray(int arr[], int n){
    
    for(int i= 0; i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortArray(arr, n);
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
        }
        return 0;
}