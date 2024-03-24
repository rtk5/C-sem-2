#include<stdio.h>
int main()
{
    printf("Bytes allowed for char%d\n",sizeof(char));
    printf("Bytes allowed for short%d\n",sizeof(short));
    printf("Bytes allowed for int%d\n",sizeof(int));
    printf("Bytes allowed for float%d\n",sizeof(float));
    printf("Bytes allowed for long%d\n",sizeof(long));
    printf("Bytes allowed for double%d\n",sizeof(double));
    return(0);
}

/*  output
Bytes allowed for char1
Bytes allowed for short2
Bytes allowed for int4
Bytes allowed for float4
Bytes allowed for long8
Bytes allowed for double8
*/