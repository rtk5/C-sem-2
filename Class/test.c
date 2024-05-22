#include<stdio.h>
#include<string.h>
int main() {
    char ch[]="This is a test";
    printf("Present at %p\n",strchr(ch,'t'));
    char *pos=strchr(ch,'t');
    int p = pos -ch;
    if(pos)
        printf("Char at pos %d\n",p);
}