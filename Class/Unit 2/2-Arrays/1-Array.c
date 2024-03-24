#include<stdio.h>
int main()
{
    int a[10],i=0,n;
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
    return 0;
}
/*OUTPUT -->
Enter size of array-2
Enter array elements-1 2 3
Display the array element-1
2
3
*/