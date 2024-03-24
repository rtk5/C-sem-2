#include<stdio.h>
int add()
{
    int a=10,b=20,c;
    c=a+b;
    return c;
}
int main() 
{
    int d;
    d=add();
    printf("The sum is %d\n",d);
}