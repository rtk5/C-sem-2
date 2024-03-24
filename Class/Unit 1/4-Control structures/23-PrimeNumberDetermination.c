#include<stdio.h>
int main()
{
int no,i,c=0;
printf("Enter the no-");
scanf("%d",&no);
for(i=2;i<=no/2;i++)
{
    if(no%i==0)
    {
        c++;
        break;
    }
}
if (c==0)
    printf("The given no. is a prime\n");
else
    printf("The given no. is not a prime\n");
return 0;

}