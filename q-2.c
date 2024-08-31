#include <stdio.h>

int sumArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 30, 48, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int result;

    result = sumArray(arr, size);
printf("your array sum is: %d\n", result);

    return 0;
}
int sumArray(int arr[], int size) {
    int sum = 0;
 
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}
