#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    
    
    for (i = 0; i < n-1; i++) {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int binarySearchSalary(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
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
    int targetSalary = 22000;
    selectionSort(salaries, n);

    int index = binarySearchSalary(salaries, n, targetSalary);
    
    if (index != -1) {
        printf("Salary %d found at index %d in the sorted array.\n", targetSalary, index);
    } else {
        printf("Salary %d not found in the array.\n", targetSalary);
    }

    return 0;
}
