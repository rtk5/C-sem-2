#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b-");
    scanf("%d%d",&a,&b);
    printf("The values before swap=%d,%d \n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("The values after swap=%d,%d \n",a,b);
    return 0;
}
/*
Enter the value of a and b-2 5
The values before swap=2,5 
The values after swap=5,2
*/