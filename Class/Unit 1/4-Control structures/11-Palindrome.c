#include<stdio.h>
int main()
{
int no,rev=0,d,count=0,temp;
printf("enter the no-");
scanf("%d",&no);
temp=no;
while(no!=0)    //or while(no)
    {
        d=no%10;
        rev=rev*10+d;
        no=no/10;
    }
if (temp==rev)
    printf("The given no. is a palindrome\n");
else
    printf("The given no. is not a palindrome\n");
return 0;
}