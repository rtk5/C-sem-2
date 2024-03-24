#include<stdio.h>

int binse(int[], int, int, int);

int main() {
    int a[10] = {3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int x;
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    int f = binse(a, 0, n - 1, x);
    if(f == -1)
        printf("Element not found\n");
    else
        printf("Element found at index: %d\n", f);
    return 0;
}

int binse(int a[], int l, int h, int x) {
    if(l <= h) {
        int m = (l + h) / 2;
        if(a[m] == x)
            return m;
        else if(a[m] > x)
            return binse(a, l, m - 1, x);
        else
            return binse(a, m + 1, h, x);
    }
    return -1; 
}
