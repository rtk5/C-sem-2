#include <stdio.h>
int main()
{
int d = 10;
printf("%d %d %d\n", d++, d++ - --d,--d);
return 0;
}