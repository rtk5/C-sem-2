/*Write a program to compute the multiplication of two matrices. Program should read number of rows and columns of two matrices and also elements of two matrices. The output should be the product of two matrices. If the number of columns of 1st Matrix is not same as rows of 2nd matrix, then program should display the message "Matrix multiplication not possible".

Input Format

First line of input is order of matrix1. Second line of input is order of matrix2. If matrix multiplication is possible for the given order of matrices, the third line of input is elements of matrix1 and fourth line of input is elements of matrix2.

Constraints

Program should check whether matrix multiplication is possible, as soon as reading the order of matrices. That is, before reading the elements of matrices.

Output Format

Product of two matrices in proper format. "Matrix multiplication not possible", if the order of two matrices doen't support matrix multiplication.

Sample Input 0

2 3
3 2
3 2 5 6 -1 0
2 10 3 20 1 0
Sample Output 0

17 70
9 40
Sample Input 1

2 2
3 3
Sample Output 1

Matrix multiplication not possible
Sample Input 2

3 2
2 3
6 7 -1 3 8 9
-4 3 9 7 6 3
Sample Output 2

25 60 75
25 15 0
31 78 99
Sample Input 3

5 4
3 4
1 2 3 4 5 6 3 5 2 6 1 3 4 5 6 7 8 7 4 9
-8 -7 9 3 6 5 2 0 6 3 2 9
Sample Output 3

Matrix multiplication not possible*/

#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    scanf("%d %d", &rows1, &cols1);
    scanf("%d %d", &rows2, &cols2);

    int mat1[10][10], mat2[10][10], result[10][10];

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible\n");
    } else {
       
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols1; ++j) {
                scanf("%d", &mat1[i][j]);
            }
        }

  
        for (int i = 0; i < rows2; ++i) {
            for (int j = 0; j < cols2; ++j) {
                scanf("%d", &mat2[i][j]);
            }
        }

     
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                result[i][j] = 0;
                for (int k = 0; k < cols1; ++k) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

    
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < cols2; ++j) {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
