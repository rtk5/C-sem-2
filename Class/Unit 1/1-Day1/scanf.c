#include <stdio.h>
int main()
{
int a,b,ret_Value_scanf,ret_Value_printf;
printf("Enter the value of a and b");
ret_Value_scanf=scanf("%d%d",&a,&b);
ret_Value_printf=printf("a : %d b : %d\n", a, b);
printf("The return value of scanf is %d\n",ret_Value_scanf);
printf("The return value of printf is %d",ret_Value_printf);
return 0; }