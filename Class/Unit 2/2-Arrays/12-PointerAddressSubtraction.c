#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *ptr=&a[0];
    int* ptr1=&a[3];
    printf("the array elements are apart by %d\n",(ptr1-ptr));
return 0;
}

//internally it divides by 4 to get 12
//ie the actual subtraction value gives 12 thus 12/4=3
