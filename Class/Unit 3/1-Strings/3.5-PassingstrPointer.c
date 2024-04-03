#include<stdio.h>
int main() {
    char c[10]="Haihello";
    char *p=c;
    while(*p!='\0') {
        printf("%c - %p \n",*p,p);
        p++;
    }
  return 0;
}
