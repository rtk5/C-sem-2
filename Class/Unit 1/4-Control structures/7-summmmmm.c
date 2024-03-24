#include<stdio.h>
int main()
{
    int no, sum=0,i=0;
    
while(1)
{
    printf("Enter value of the no.-->");
    scanf("%d",&no);
    if(no>0)        //keeps looping until a -ve or 0 is enterred

    sum+=no;
    else
    break;

}
printf("The sum=%d\n",sum);
    return 0;
}