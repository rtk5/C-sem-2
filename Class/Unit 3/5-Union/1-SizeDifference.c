#include<stdio.h>
#pragma pack(1)     //for no padding
union xyz {
    int x;
    char a[10];
}u1;
struct A {
    int x;
    char a[10];
}a1;

int main() {
    printf("The union = %d\n",sizeof(u1));
    printf("The struct = %d\n",sizeof(a1));

}