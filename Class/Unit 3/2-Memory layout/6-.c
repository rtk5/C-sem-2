#include<stdio.h>
#include<stdlib.h>

int main() {

    int *p=(int *)malloc(sizeof(int));
    *p=10;
    printf("Address =%p\n",p);
    printf("The value = %d\n",*p);      //memory leak

    p=(int*)malloc(sizeof(int));
    *p=20;

    printf("Address = %p\n",p);
    printf("The value = %d\n",*p);

    return 0;
}