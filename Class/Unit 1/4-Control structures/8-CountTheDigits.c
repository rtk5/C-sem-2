#include<stdio.h>
int main()
{
int no,rev=0,d,count=0;
printf("enter the no-");
scanf("%d",&no);
while(no!=0)
    {
        no%10;
        count+=1;
        no=no/10;
    }
printf("The no. of digits=%d",count);
return 0;
}