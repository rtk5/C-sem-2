#include<stdio.h>
int main()
{
    float no=123.333f,dn;
    int no1,c,d;
    no1=(int)no;
    dn=(no-no1)*1000;
    int dn1=(int)dn;
    printf("The extracted fractional part=%d\n",dn1);
while(dn1!=0)
    {
        d=dn1%10;
        if(d%3==0)
            {c+=1;
        printf("the no=%d divisible by 3\n",d);}
        dn1=dn1/10;
    }
printf("The no. of digits divisible by 3=%d\n",c);
    return(0);

}