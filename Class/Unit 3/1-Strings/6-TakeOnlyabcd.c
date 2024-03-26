#include<stdio.h>
int main() {
    char a[10];
    printf("Enter the string-");
    scanf("%[abcd]s",a); //reads only abcd
    printf("%s\n",a);

    
    return 0;
}