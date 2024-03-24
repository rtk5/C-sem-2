#include<stdio.h>
int main()
{
int no,i,rev=0,d,count=0,temp;
printf("enter the limit-");
scanf("%d",&no);
for(i=1;i<=no;i++)
{ 
    temp=i;
    rev=0;
       while(temp!=0)
        {
            d=temp%10;
            rev+=d*d*d;
            temp=temp/10;
        }
    if (i==rev)
        printf("%d ",i);
}

return 0;
}