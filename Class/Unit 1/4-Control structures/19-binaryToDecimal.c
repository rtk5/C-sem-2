#include<stdio.h>
int main()
{
int dec=0,bin,we=1,d;
printf("Enter the no-");
scanf("%d",&bin);
while(bin!=0)
{
    d=bin%10;
    dec=dec+d*we;
    we=we*2;
    bin = bin / 10;
}
printf("The decimal equi= %d\n",dec);
return 0;
}