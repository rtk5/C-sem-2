#include<stdio.h>
int main()
{
    float no=123.333f,dn;
    int no1;
    no1=(int)no;
    dn=(no-no1)*1000;
    int dn1=(int)dn;
    printf("The extracted fractional part=%d\n",dn1);


    return(0);

}