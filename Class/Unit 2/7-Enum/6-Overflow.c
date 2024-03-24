#include<stdio.h>
#include<limits.h>
enum d{a=INT_MAX,b,c};  //overflow error, since a has reached max value
int main() {
    enum d e=a;
    printf("%d",a);
    return 0;
}


