#include<stdio.h>
int main()
{
    float a=10.6;
    void * ptr;
    ptr=&a;
    printf("the value a=%f\n",a);
    printf("The address = %f \n",&a);
    printf("The address = %f \n",ptr);
   // printf("the value a=%f\n\n",*ptr);

 printf("the value a=%f\n\n",*(float*)ptr);


    return 0;
}