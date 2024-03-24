#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    char *ptr1;
    float *ptr2;
    printf("The no of bytes allowed for int pointer=%d\n",sizeof(ptr));
    printf("The no of bytes allowed for char pointer=%d\n",sizeof(ptr1));
    printf("The no of bytes allowed for float pointer=%d\n",sizeof(ptr2));
        

return 0;
}
/*The no of bytes allowed for int pointer=8
The no of bytes allowed for char pointer=8
The no of bytes allowed for float pointer=8

Therefore my system is a 64bit machine*/