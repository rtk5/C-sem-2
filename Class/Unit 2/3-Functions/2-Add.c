#include<stdio.h>
void add(int,int);  //fn prototype
int main()
{
    int a=10,b=20;
    add(a,b);   //fn call
return 0;
}
void add(int a,int b)   //fn definition
{
    int c=a+b;
    printf("The added value is %d\n",c);
}