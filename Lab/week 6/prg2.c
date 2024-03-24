//Average Challenge

/*Write a C Program to calculate average of n elements taken from user input. Pass array as actual parameter and pointer as a formal parameter to the user defined function.

Input Format

First line contains an integer n, number of elements in the array.

Second line contains elements of the array.

Constraints

1 <= n <= 10

1 <= elements of array <= 1000

Output Format

The average of elements is : {average}*/

#include <stdio.h>

void avg(int arr[], int n, float *a) {
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    *a = (float)sum / n; 
}

int main() {
    int n, i;
    float a = 0.0;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    avg(arr, n, &a); 

    printf("The average of elements is : %.6f", a);

    return 0;
}
