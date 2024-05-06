#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union A {
    int x;
    union {
        char a[10];
        int y;
    } inner;
};

int main() {
    union A b;
    b.x = 10;
    printf("%d\n", b.x);
    strcpy(b.inner.a, "pes");
    printf("%s\n", b.inner.a);
    b.inner.y = 20;
    printf("%d\n", b.inner.y);
    
    return 0;
}
