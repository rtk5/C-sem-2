#include<stdio.h>
#include<stdbool.h>

bool isIdentityMatrix(int mat[10][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                return false; // If condition for identity matrix fails, return false
            }
        }
    }
    return true; // If all conditions for identity matrix are satisfied, return true
}

int main() {
    int mat[10][10];
    int n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    if (isIdentityMatrix(mat, n)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }
    
    return 0;
}
