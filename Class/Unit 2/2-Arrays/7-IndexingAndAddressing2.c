//Hexadecimal 
#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("%p\n",ptr); //printing address
    printf("%p\n",(char*)ptr+1);
    printf("%p\n",(float*)ptr+1);       //-->> Hexadecimal
 //   printf("%u\n",ptr);
return 0;
}
/*0x7ffd148ec8d4
0x7ffd148ec8d5
0x7ffd148ec8d8*/