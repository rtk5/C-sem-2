#include <stdio.h>

int main() {
    int a[][2] = {
        {3, 5},
        {6, 7},
        {8, 1},
        {99, 66},
        {33, 15},
        {36} // This initializes the last element as 36, and the second element is implicitly set as 0
    };

    printf("%d", a[1][2]); // This line attempts to print a[1][2]
}
