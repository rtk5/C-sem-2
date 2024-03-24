#include <stdio.h>

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
