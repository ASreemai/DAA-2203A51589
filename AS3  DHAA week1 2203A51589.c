#include <stdio.h>

void merge(int arr[], int left, int mid, int right, int ascending);
void mergeSort(int arr[], int left, int right, int ascending);
void printArray(int arr[], int n);

int main() {
    int n;
    printf("Enter the number of destinations: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter time to reach destination:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, 0, n - 1, 1);
    printf("Sorted times in ascending order:\n");
    printArray(arr, n);

    mergeSort(arr, 0, n - 1, 0);
    printf("Sorted times in descending order:\n");
    printArray(arr, n);

    return 0;
}

void merge(int arr[], int left, int mid, int right, int ascending) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if ((ascending && L[i] <= R[j]) || (!ascending && L[i] >= R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right, int ascending) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, ascending);
        mergeSort(arr, mid + 1, right, ascending);

        merge(arr, left, mid, right, ascending);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}
