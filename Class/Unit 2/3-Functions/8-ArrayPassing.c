#include<stdio.h>

void arrpassing(int[], int); // Function prototype declaration

int main() {
    int a[10];
    int n;
    
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    arrpassing(a, n);

    return 0;
}

void arrpassing(int a[], int n) {
    printf("Updated array elements after adding 10:\n");
    for (int i = 0; i < n; i++) {
        a[i] = a[i] + 10;
        printf("%d ", a[i]);
    }
}
