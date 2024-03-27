#include<stdio.h>

void strlenu(char *s); // Function prototype

int main() {
    char s1[10] = "pesu";
    strlenu(s1); // Pass the array s1 to the strlenu function
    return 0;
}

void strlenu(char *s) {
    int l = 0;
    while (*s != '\0') {
        l++;
        s++;
    }
    printf("%d\n", l);
}
