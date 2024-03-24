#include<stdio.h>
int main()
{
int a,b,f;
printf("enter the no.s-");
scanf("%d%d",&a,&b);
f=(a<b)?a:b;
while(1)    // 1 refers to true
    {
        if((a%f==0)&&(b%f==0))
            break;
        f-=1;
    }
printf("The gcd of the 2 numbers is =%d\n",f);
return 0;
}