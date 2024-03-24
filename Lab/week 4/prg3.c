/*Print reverse pascal’s Triangle in pyramid shape. Take the number of rows as input from the user. Accept only positive input, handle non-positive input cases

Input Format

An integer denoting the number of rows to be printed.

Constraints

The input integer will be between -10 to 10, both inclusive.

Output Format

In case of a non-positive number, print “Invalid input” else print pascal’s triangle in reverse order and in pyramid shape.*/
#include <stdio.h>

void printReversePascalsTriangle(int rows) {

    if(rows <= 0) {

        printf("Invalid input");

        return;

    }

    for(int i = rows; i >= 1; --i) {

        // Print spaces

        for(int space = 0; space < rows - i; ++space)

            printf(" ");

        int coef = 1;

        for(int j = 1; j <= i; ++j) {

            printf("%d ", coef);

            coef = coef * (i - j) / j;

        }

        printf("\n");

    }

}

int main() {

    int rows;

    scanf("%d", &rows);

    printReversePascalsTriangle(rows);

    return 0;

}

