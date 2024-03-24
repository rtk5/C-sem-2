#include<stdio.h>
int main()
{
    int no;
    printf("Enter no=");
    scanf("%d",&no);
    if (no%2==0)
    printf("The no. is even\n");
    if (no%2==1)
    printf("The no. is odd\n");

    return 0;
}