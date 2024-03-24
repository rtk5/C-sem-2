#include<stdio.h>

void reverse(int n) {
    if(n > 0) {
        printf("%d \n", n);
        reverse(n - 1); 
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}

