#include<stdio.h>
int main() {
    int x=10;
    int *ptr=&x;
    int **p1=&ptr;
    printf("The address = %p\n",&x);
    printf("The address = %p\n",&ptr);
    printf("The address = %p\n\n",p1);

    printf("The value=%d\n",x);
    printf("The value=%d\n",*ptr);
    printf("The value=%d\n",**p1);


}