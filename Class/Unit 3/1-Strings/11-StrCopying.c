#include<stdio.h>

int main() {
    char s1[10]="pesu";
    char s2[10];
    int i=0;
    while(s1[i]!='\0') {
        s2[i]=s1[i];
        i++;

    }
    s2[i]='\0'; //if not there -->> The target string is pesu�
    printf("The target string is %s\n",s2);
}