#include<stdio.h>

int strextr(char []);

int main() {
    char s[10] = "HaiHello";
    printf("The original string: %s\n", s);
    strextr(s);
    return 0;
}

int strextr(char s[10]) {
    char a[10];
    int i;
    for (i = 1; s[i] != '\0'; i++) {
        if(s[i]!='o') {
        a[i - 2] = s[i];
        printf("%c", a[i - 2]);
    }}
    a[i - 1] = '\0'; // Terminate the extracted substring with a null character
    printf("\n");
    return 0;
}
