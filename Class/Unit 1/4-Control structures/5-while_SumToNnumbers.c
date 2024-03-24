#include<stdio.h>
int main()
{
    int no, sum=0,i=0;
    printf("Enter value of the no.=");
    scanf("%d",&no);
while(i<=no)
{
    sum+=i;
    i++;

}
printf("The sum=%d",sum);
    return 0;
}