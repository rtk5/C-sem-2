//packing

#include<stdio.h>
#pragma pack(1)
struct a {
    char a;
    int b;
    char c;
}s1;

int main() {
    struct a s1;
    printf("%d\n",sizeof(s1));      //output -->> 6

    return 0;
}