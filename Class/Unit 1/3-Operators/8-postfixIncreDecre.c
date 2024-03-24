#include<stdio.h>
int main()
{
    int a=10,y,z;
    y=a++;
    z=a--;
    printf("a=%d\n",a);
    printf("y=%d\n",y);
    printf("z=%d\n",z);
    printf("a=%d\n",a);


    
    return 0;
}