#include<stdio.h>
int main()
{
int no,rev=0,d,count=0,temp;
printf("enter the no-");
scanf("%d",&no);
temp=no;
while(no!=0)
    {
        d=no%10;
        rev+=d*d*d;
        no=no/10;
    }
if (temp==rev)
    printf("The given no. is an armstrong no.\n");
else
    printf("The given no. is not an armstrong no\n");
return 0;
}