#include <stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int t = 20;
    int f = 30;
    float c = 20;

    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n", a/b);
    printf("a.b=%d\n", a%b);

    printf("a>b=%d\n", a>b);    //true or false not seen as output
    printf("a<b=%d\n",a<b);     //output will be 1 or 0
    printf("a>=b=%d\n",a>=b);
    printf("a<=b=%d\n", a<=b);
    printf("a!=b%d\n", a!=b);

    printf("t&&f=%d\n",t&&f);
    printf("t||f=%d\n",t||f);
    printf("!t=%d\n",!t);
    printf("!f=%d\n",!f);

    printf("%d \n",(t>f)&&f++);
    printf("%d \n",(f>t)&&f++);
    printf("%d",f);


}