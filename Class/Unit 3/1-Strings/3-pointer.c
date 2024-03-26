#include<stdio.h>
int main() {
char a[10]={'p','e','s','\0'};
char *p=a;
*(p+1)='b';
printf("%s\n",a);

return 0;
}
/*pbs*/