#include<stdio.h>
int main() {
    char s1[10]="pesu";
    int i=0,l=0;
    while(s1[i]!='\0') {
        l++;
        i++;
    }
    printf("%d \n",l);
    return 0;
    
}