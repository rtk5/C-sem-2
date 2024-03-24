#include<stdio.h>

int main() {
    int a[10][10];
    int r, c;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);
    
    printf("Enter the matrix: \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Sum of rows:\n");
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += a[i][j]; // summing elements of each row
        }
        printf("Row %d: %d\n", i + 1, sum);
    }
    
    return 0;
}
