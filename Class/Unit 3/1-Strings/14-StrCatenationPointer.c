#include<stdio.h>
void strcatu(char *s,char *p);
int main() {
    char s1[30]="pesu";
    char s2[10]="College" ;
    printf("The original string is %s\n",s1);
    strcatu(s1,s2);
    printf("The concatenated string is %s\n",s1);

    return 0;
}

void strcatu(char *s,char *p) {
    while(*s!='\0') {
        s++;
    }
    while (*p != '\0') {
        *s = *p;
        s++;
        p++;
    }
    *s='\0';
    }
