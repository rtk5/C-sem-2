#include<stdio.h>
int main()
{
int no,rev=0,d,count=0;
printf("enter the no-");
scanf("%d",&no);
while(no!=0)
    {
        d=no%10;
        rev=rev*10+d;
        no=no/10;
    }
printf("The reverse no. =%d",rev);
return 0;
}