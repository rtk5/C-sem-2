#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],d[10][10];
    int r,c;
    printf("Enter the no. of rows and col - ");
    scanf("%d%d",&r,&c);
    printf("Enter matrix1 - ");
    for (int i=0;i<r;i++)
    {    for(int j=0;j<c;j++)
     {       scanf("%d",&a[i][j]);
    }}
    printf("Enter matrix2 - ");
    for (int i=0;i<r;i++)
    {    for(int j=0;j<c;j++)
     {       scanf("%d",&b[i][j]);
    }}
    for (int i=0;i<r;i++)
    {    for(int j=0;j<c;j++)
     {       d[i][j]=a[i][j]+b[i][j];
    }}
    printf("Addition \n");
    for (int i=0;i<r;i++)
    {    for(int j=0;j<c;j++)
     {       printf("%d\t",d[i][j]);
    }
    printf("\n");}
    return 0;
}