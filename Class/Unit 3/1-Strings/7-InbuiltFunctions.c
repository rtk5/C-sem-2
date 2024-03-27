#include<stdio.h>
#include<string.h>
int main() {
    char s1[20]="pes";
    char s2[10]="pes";
    char s3[10];

    printf("The length of string= %d\n",strlen(s1));
    printf("The comparison = %d\n",strcmp(s1,s2));
    printf("The copy = %s\n",strcpy(s3,s1));
    printf("The strcat = %s\n",strcat(s1,s2));

    return 0;


}