#include<stdio.h>
int main()
{
    int a[10],i=0,n,k,sum=0,pve=0,nve=0,avg;
    printf("Enter size of array->");
    scanf("%d",&n);
    printf("Enter array elements->");
    for(i=0;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<=n;i++)
        {
            if(a[i]>0)
                pve++;
            else if(a[i]<0)
                nve++;
            else
                sum++;
        }
    printf("No. of +ve no.s =%d\n",pve);
    printf("No. of -ve no.s =%d\n",nve);
    printf("No. of 0 no.s =%d\n",sum);


    return 0;
}