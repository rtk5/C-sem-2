#include<stdio.h>
struct a {
    char a;
    int b;
    char c;
}s1;

int main() {
    struct a s1;
    printf("%d\n",sizeof(s1));      //output -->> 12

    return 0;
}