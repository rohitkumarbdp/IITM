#include <stdio.h>

void sortArray(int arr[], int n) 
{
    // Write function body code below
    for(int i = 0;i<n;i++){
        for (int j= i; j<n; j++){
            if (arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}