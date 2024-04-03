#include <stdio.h>

char* strchru(char *a, char c) {
    char *st = a;
    char *p1 = NULL;
    while (*st != '\0' && p1 == NULL) {
        if (*st == c) {
            p1 = st;
            break;
        }
        st++;
    }
    return p1;
}

int main() {
    char s[10] = "haihello";
    char c;
    char *p;
    
    printf("Enter the character to be searched: ");
    scanf(" %c", &c);

    p = strchru(s, c);
    
    if (p != NULL) {
        printf("Character '%c' found at position: %ld\n", c, p - s);
    } else {
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}
