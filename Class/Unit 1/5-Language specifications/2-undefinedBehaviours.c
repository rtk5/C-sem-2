#include <stdio.h>
#include<limits.h>
#include<math.h>
int main()
{
int d = 10;
//Division by zero
printf("%d\n", 5 / 0);
//Signed integer overflow
printf("Size of int: %d\n", INT_MAX + 1);
//Null pointer dereference
int *ptr = NULL;
printf("%d", *ptr);
//Memory access outside of array bounds
 int arr[5] = {0, 1, 2, 3, 4};
printf("%d", arr[7]);
return 0;
}