#include<stdio.h>
enum days {mon,tue,wed,thu};//stores only int
int main()
{
    enum days d;
    d=mon;
    printf("%d\n",d);   // output -->> 0
    return 0;
}