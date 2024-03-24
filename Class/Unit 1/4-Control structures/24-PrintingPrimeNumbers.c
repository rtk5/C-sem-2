#include<stdio.h>
int main()
{
int no,i,j,c=0;
printf("Enter the limit-");
scanf("%d",&no);
for (j=2;j<=no;j++)
    {   c=0;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                c++;
                break;
            }
        }
    if (c==0)
        printf("%d ",j);
    else
        printf("");
    }
return 0;
}