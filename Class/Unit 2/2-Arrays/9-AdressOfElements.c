#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,};
    int *ptr =a;
    for(int i=0;i<=4;i++)
    {
        printf("%u\n",ptr++);

    }
return 0;
}
/*3942840672
3942840676
3942840680
3942840684
3942840688*/