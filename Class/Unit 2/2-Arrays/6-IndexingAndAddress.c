#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("%u\n",ptr); //printing address
    printf("%u\n",(char*)ptr+1);
    printf("%u\n",(float*)ptr+1);       //%u for unsigned integer
 //   printf("%u\n",ptr);
return 0;
}
/*OUTPUT -->>>
2034973444
2034973445 -->>chr
2034973448 -->>float
*/