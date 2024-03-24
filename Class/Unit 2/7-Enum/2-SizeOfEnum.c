#include<stdio.h>
enum days {mon=5,tue,wed,thu};
// enum days {mon=5,tue='jcbeub',wed,thu};  //-->> error can't be string

int main()
{
    enum days d;
    d=tue;
    printf("%d\n",d);   // output -->> 6
    printf("Size of enum = %d\n",sizeof(d));        // stores only int --> size =4
    return 0;
}