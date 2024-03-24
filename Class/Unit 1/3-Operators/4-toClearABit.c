#include<stdio.h>
int main()
{
    int no,pos;
    printf("Enter the no. and position-");
    scanf("%d%d",&no,&pos);
    printf("The value before set=%d",no);
    no=no&~(1<<pos);
    printf("The value after set=%d",no);
    return 0;
}
// inpu t --> Enter the no. and position-5 2
// output --> The value before set=5The value after set=1