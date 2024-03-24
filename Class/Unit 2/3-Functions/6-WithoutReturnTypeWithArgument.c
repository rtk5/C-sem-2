#include <stdio.h>

void add(int a, int b) {
    int c = a + b;
    printf("The added value is %d\n", c);
}

int main() {
    int a = 10, b = 20;
    add(a, b);
    return 0;
}
