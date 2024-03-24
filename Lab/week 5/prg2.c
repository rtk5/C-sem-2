/*Program that demonstrates the usage of pointers for reading integers for a two dimensional array. Also, display the elements of the same array using Pointer.

Input Format

First line of the input is the number of rows and columns for the matrix. Second line of the input is integers provided as input to 2D array.

Constraints

Rows and Columns - Positive Integers

Output Format

Displaying the 2D array in the form of matrix.

Sample Input 0

2 2
10 20 30 40
Sample Output 0

10 20
30 40
Sample Input 1

3 2
12 7 -4 9 -146 0
Sample Output 1

12 7
-4 9
-146 0
Sample Input 2

4 2
6 7 2 3 9 5 0 2
Sample Output 2

6 7
2 3
9 5
0 2
Sample Input 3

3 4
23 9 78 43 0 19 22 35 6 31 94 56
Sample Output 3

23 9 78 43
0 19 22 35
6 31 94 56*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r, c;
    int a[10][10];
    scanf("%d%d", &r,&c); 
    int (*p)[10] = a;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < r; i++) { 
        for (int j = 0; j < c; j++) {
            printf("%d\t", *(*(p + i) + j)); 
        }
        printf("\n"); 
    }
    return 0;
}
