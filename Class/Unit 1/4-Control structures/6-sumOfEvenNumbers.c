#include<stdio.h>
int main()
{
    int no, sum=0,i=0;
    printf("Enter value of the no.-->");
    scanf("%d",&no);
while(i<=no)
{
    sum+=i;
    i=i+2;

}
printf("The sum=%d\n",sum);
    return 0;
}