#include <stdio.h>
int binarySearchSalary(int salaries[], int n, int targetSalary) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (salaries[mid] == targetSalary) {
            return mid;
        } else if (salaries[mid] < targetSalary) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}
int main() {
    int salaries[] = {20000, 35000, 45000, 50000, 52000, 54000, 76000, 83000};
    int n = sizeof(salaries) / sizeof(salaries[0]);
    int targetSalary = 54000;

    int index = binarySearchSalary(salaries, n, targetSalary);
    if (index != -1) {
        printf("Salary %d found at index %d.\n", targetSalary, index);
    } else {
        printf("Salary %d not found.\n", targetSalary);
    }

    return 0;
}
