#include<stdio.h>
enum days{sun,mon=5,tue}; //sun=0;
int main()
{
    enum days d;
    printf("%d\n",sun+mon);
    printf("%d\n",sun-mon);
    printf("%d\n",sun*mon);
    printf("%d\n",sun/mon);
    printf("%d\n",sun%mon);
    printf("%d\nsun",sun&&mon);
       // sun++;


    return 0;
}