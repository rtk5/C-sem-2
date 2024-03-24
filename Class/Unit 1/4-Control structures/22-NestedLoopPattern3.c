#include<stdio.h>
int main()
{
int i,j,no;
printf("Enter the limit-");
scanf("%d",&no);
for(i=0;i<no;i++)
{
    for(j=0;j<no;j++)
    {
       if(i<=j)
            printf("*");
        else
        printf(" ");
    }
   printf("\n"); 
}
}