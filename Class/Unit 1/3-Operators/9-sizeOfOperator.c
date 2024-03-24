#include<stdio.h>
int main()
{
    int a=10;
    double b=20.8;
    printf("The value = %d \n",sizeof(a+b));
    printf("The value = %d \n",sizeof(a++));
    printf("The value = %d \n",sizeof(a+b));


    return 0;
}