#include<stdio.h>
void strc(char *s,char *s1);
int main() {
    char s1[10]="pesu";
    char s2[10];
    printf("The source str is %s\n",s1);
    strc(s1,s2);
    printf("The target str is %s\n",s2);
    return 0;
}
void strc(char *s,char *q) {
    while(*s!='\0') {
        *q=*s;
        s++;
        q++;

    }
    *q='\0'; //if not there -->> The target string is pesu�
}