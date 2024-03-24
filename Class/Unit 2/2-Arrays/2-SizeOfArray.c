#include<stdio.h>
int main()
{
    int a[10],i=0,n,k;
    printf("Enter size of array-");
    scanf("%d",&n);
    printf("Enter array elements-");
    for(i=0;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
    printf("Display the array element-");
    for(i=0;i<=n;i++)
        {
            printf("%d\n",a[i]);
        }
    printf("Size of array=%d bytes\n",sizeof(a));
    k=sizeof(a)/sizeof(int);
    printf("The no. of elemants in array=%d\n",k);//other positions will be filled with junk values

    return 0;
}