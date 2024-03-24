#include<stdio.h>
int main()
{
    printf("\tram \r sam \n");  //\r makes it start from begining of the screen(overwrites)
    float n=3.14;
    int f=31;
    char b = 'b';
    printf("%10.3f",n,"\n");
    printf("%5d,%c",f,b);
    return(0);
}
