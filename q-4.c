#include <stdio.h>

void cubeE(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = *(arr + i) * *(arr + i) * *(arr + i);
    }
}

int main() {
    int size;
    printf("Enter the number of elements in your array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements your array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    cubeE(arr, size);

    printf("Cubed elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
