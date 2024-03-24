#include<stdio.h>
int main()
{
    int a[10][10];
    int r,c;
    printf("Enter the no. of rows and col - ");
    scanf("%d%d",&r,&c);
    printf("Enter matrix - ");
    for (int i=0;i<r;i++)
    {    for(int j=0;j<c;j++)
     {       scanf("%d",&a[i][j]);
    }}
    printf("Transpose \n");
    for (int i=0;i<r;i++)
    {    for(int j=0;j<c;j++)
     {       printf("%d\t",a[j][i]);
    }
    printf("\n");}
    return 0;
}



