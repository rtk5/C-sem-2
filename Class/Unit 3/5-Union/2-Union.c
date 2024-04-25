#include <stdio.h>
#include <string.h>

union xyz {
    int x;
    char a[10];
} u1;

struct A {
    int x;
    char a[10];
} a1;

int main() {
    printf("The size of union = %d\n", sizeof(u1));
    u1.x = 100;
    strcpy(u1.a, "pesuniversity"); // Corrected syntax for strcpy
    printf("%s\n", u1.a); // Changed format specifier from %d to %s
    printf("%d\n", u1.x);
    return 0;
}
