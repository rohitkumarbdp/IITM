#include <stdio.h>
//Write function below
int isIncreasingDecresing(int arr[], int size) {
    if (size < 3) return -1;

    int p = 0;

    // Find the peak index p where the array is strictly increasing
    while (p < size - 1 && arr[p] < arr[p + 1]) {
        p++;
    }

    // If p is 0 or size-1, it means there's no valid peak
    if (p == 0 || p == size - 1) {
        return -1;
    }

    // Check if the array is strictly decreasing after p
    for (int i = p; i < size - 1; i++) {
        if (arr[i] <= arr[i + 1]) {
            return -1;
        }
    }

    return p;
}





int main() {
    int size, res;
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d",isIncreasingDecresing(arr, size));
    return 0;
}