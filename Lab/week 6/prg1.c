//Bubble Sort Challenge

/*Write a program to take array as the user input and sort it using Bubble Sort. Make sure that array is passed as a parameter to user defined function.

Input Format

First line contains an integer n, number of elements in the array.

Second line contains elements of the array.

Constraints

1 <= n <= 10

1 <= elements of array <= 1000

Output Format

Sorted array: {Given Array in sorted order}*/

#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
