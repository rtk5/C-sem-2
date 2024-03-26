#include<stdio.h>
int main() {
    char a[10];
    printf("Enter the string-");
    scanf("%[^\n]s",a); //until next line
    printf("%s\n",a);

    
    return 0;
}