#include<stdio.h>
int main()
{
    int a[10],b[10],j=0,i=0,l=0,w=0,m=0,n,k;
    printf("Enter size of 1st array->");
    scanf("%d",&n);
    printf("Enter size of 2nd array->");
        scanf("%d",&k);


    printf("Enter 1st array elements->");
    for(i=0;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
printf(" Enter 2nd  array elements->");
    for(l=0;l<=k;l++)
        {
            scanf("%d",&b[l]);
        }
//merging
    for(m=0;m<=k+1;m++)
        {
            
            a[n+m+1]=b[m];

        }
     printf("Display the array element-");
    for(w=0;w<=n+k+1;w++)
        {
            printf("%d\n",a[w]);
        }
    return 0;
}

/*OUTPUT -->
Enter size of 1st array->2
Enter size of 2nd array->2
Enter 1st array elements->1 2 3
 Enter 2nd  array elements->4 5 6
Display the array element-1
2
3
4
5
6
*/