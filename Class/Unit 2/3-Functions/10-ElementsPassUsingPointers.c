#include<stdio.h>
void arr(int*,int);
int main()
{
    int a[]={1,2,3,4,5};
    int n;
    n=sizeof(a)/sizeof(a[0]);
    arr(a,n);
    return 0;
}
void arr(int *b,int n)  //pointer to an array
{   int i=0;
    printf("The fn the elements are ");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",*(b++));
    }
    printf("\n");
}