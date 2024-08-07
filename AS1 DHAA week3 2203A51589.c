#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(",");
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {87, 67, 21, 59, 99, 46, 84, 32, 43, 12, 90, 23};
    int arr2[] = {44, 66, 37, 90, 81, 43, 55, 19, 98, 33, 72, 51};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    printf("Test Case-1\n");
    printf("Input:\n");
    printf("Enter orders Priority Number:\n");
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    printf("\nAfter Sorting Orders Priority:\n");
    printArray(arr1, n1);

    printf("\nTest Case-2\n");
    printf("Input:\n");
    printf("Enter orders Priority Number:\n");
    printArray(arr2, n2);
    bubbleSort(arr2, n2);
    printf("\nAfter Sorting Orders Priority:\n");
    printArray(arr2, n2);

    return 0;
}
