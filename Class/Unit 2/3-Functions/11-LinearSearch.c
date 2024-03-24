#include<stdio.h>
void arr(int*,int,int);
int main()
{
    int a[]={1,2,3,4,5};
    int n=0,m;
    n=sizeof(a)/sizeof(a[0]);
    printf("Enter the element to be searched\n");
    scanf("%d",&m);
    arr(a,n,m);
    return 0;
}
void arr(int *b,int n,int m)  //pointer to an array
{   int i=0;
int flag=0;
    for (int i=0;i<n;i++)
    {
        if(m==*b++)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    printf("The element found ");
    else
    printf("The element was not found ");
  
}