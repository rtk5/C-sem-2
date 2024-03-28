#include<stdio.h>
void strcatu(char a1[],char b1[]);
int main() {
    char s1[30]="pesu";
    char s2[10]="College" ;
    printf("The original string is %s\n",s1);
    strcatu(s1,s2);
    printf("The concatenated string is %s\n",s1);

    return 0;
}

void strcatu(char a1[30],char b1[10]) {
    int i=0;
    while(a1[i]!='\0') {
        i++;
    }
    for(int j=0;b1[j]!='\0';j++) {
        a1[i]=b1[j];
        i++;
    }
    a1[i]='\0';
    }
