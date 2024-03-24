#include<stdio.h>
int main()
{
int no,rev=0,d,count=0;
printf("enter the no-");
scanf("%d",&no);
while(no!=0)
    {
        d=no%10;
        if(d%2==0)
            count+=1;
        no=no/10;
    }
printf("The no. of digits divisible by 2=%d",count);
return 0;
}