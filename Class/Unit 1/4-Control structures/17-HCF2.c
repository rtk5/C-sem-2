#include<stdio.h>
int main()
{
int a,b,f;
printf("enter the no.s-");
scanf("%d,%d",&a,&b);
while(a!=b)
{
    if(a>b)
        a=a-b;
    else
        b=b-a;
}
printf("The gcd of the 2 numbers is = %d\n",a);
return 0;
}