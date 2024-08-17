#include <stdio.h>

void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap the elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[10];

    // Accepting 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    sortArray(arr, 10);

    // Printing the fourth smallest integer
    printf("The fourth smallest integer is: %d\n", arr[3]);

    return 0;
}