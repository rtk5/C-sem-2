#include<stdio.h>

void strlenu(char s1[]); // Function prototype

int main() {
    char s1[10] = "pesu";
    strlenu(s1); // Pass the array s1 to the strlenu function
    return 0;
}

void strlenu(char s1[]) {
    int i = 0, l = 0;
    while (s1[i] != '\0') {
        l++;
        i++;
    }
    printf("%d\n", l);
}
