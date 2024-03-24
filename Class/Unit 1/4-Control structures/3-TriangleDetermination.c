#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 sides=");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a==b && b==c)
    printf("Triangle is equilateral\n");
    if (a==b||b==c||c==a)
    printf("Triangle is isoceles\n");
else
printf("The triangle is scalene\n");
    return 0;
}