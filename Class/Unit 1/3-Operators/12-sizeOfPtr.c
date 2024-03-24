#include<stdio.h>
int main()
{
    float a=10.6;
    void * ptr;
    ptr=&a;
    printf("the size of=%d\n",sizeof(ptr));
    
   
//output -->    the size of=8
// means that my system is 64 bit


    return 0;
}