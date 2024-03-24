#include<stdio.h>

int binse(int[], int, int, int);

int main() {
    int a[10] = {3, 4, 5, 6, 7, 8, 9};
    int h, x, l = 0, f;
    h = sizeof(a) / sizeof(a[0]);
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    f = binse(a, l, h, x);
    if(f == -1)
        printf("Element not found\n");
    else
        printf("Element found\n");
    return 0;
}

int binse(int a[], int l, int h, int x) {
    int m;
    while(l <= h) { 
        m = (l + h) / 2;
        if(x == a[m]) {
            return 1;
        } 
        else if(x > a[m]) {
            l = m + 1;
        } 
        else {
            h = m - 1;
        }
    }
    return -1; 
}
