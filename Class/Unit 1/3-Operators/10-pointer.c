#include<stdio.h>
int main()
{
    int a=10;
    int * ptr;
    ptr=&a;
    printf("the value a=%d\n",a);
    printf("The address = %d \n",&a);
    printf("The address = %d \n",ptr);
    printf("the value a=%d\n\n",*ptr);

    *ptr=a+10;
    printf("the value a=%d\n",a);
    printf("The address = %d \n",&a);
    printf("The address = %d \n",ptr);
    printf("the value a=%d\n",*ptr);

    return 0;
}