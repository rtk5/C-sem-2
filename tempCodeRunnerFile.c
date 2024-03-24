#include<stdio.h>
void fun(int *);
int main() {
  int a1=100;
  fun(&a1);
  printf("%d",a1);
  return 0;
}
void fun(int *x) {
  *x=200;
}