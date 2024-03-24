#include<stdio.h>
void f1(int);
int main()
{
    int x=10;
    printf("Before fn call %d\n",x);
    f1(x);
    return 0;

}
void f1(int x)
{
    x+=10;
    printf("inside f1 %d\n",x);
}