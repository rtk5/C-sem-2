#include<stdio.h>
int main()
{
    int a[10],i=0,n,k,sum=0,avg;
    printf("Enter size of array-");
    scanf("%d",&n);
    printf("Enter array elements-");
    for(i=0;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Display the sum of the element-");
    for(i=0;i<=n;i++)
        {
            sum=sum+a[i];
        }
        avg=sum/n;
    printf("%d\n",sum);
    printf("The average is %d\n",avg);//other positions will be filled with junk values

    return 0;
}