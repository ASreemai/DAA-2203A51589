#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
              
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int binarySearchSalary(int arr[], int n, int salary) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == salary) {
            return mid;
        } else if (arr[mid] < salary) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int salaries[] = {20000, 45000, 35000, 29000, 52000, 33000, 64000, 22000};
    int n = sizeof(salaries) / sizeof(salaries[0]);
    int salaryToFind = 22000;
    bubbleSort(salaries, n);
    printf("Sorted Salaries: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", salaries[i]);
    }
    printf("\n");
    int index = binarySearchSalary(salaries, n, salaryToFind);
    if (index != -1) {
        printf("The salary %d is found at index %d.\n", salaryToFind, index);
    } else {
        printf("The salary %d is not found.\n", salaryToFind);
    }

    return 0;
}
