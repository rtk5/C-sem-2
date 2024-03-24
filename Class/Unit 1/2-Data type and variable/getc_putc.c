#include<stdio.h>

int main()
{
    char a;
    printf("enter the values-");
    a=getc(stdin);      //getc can take input even from text files
    printf("The display value - \n");
    putc(a,stdout);
    return 0;
}
