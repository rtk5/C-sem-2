#include <stdio.h>

int strchru(char *a, char c) {
    char *st = a;
    int count = 0;
    while(*st!='\0'){
        if (*st == c) {
            count++;
        }
        st++;
    }
    return count;
}

int main() {
    char s[100];
    printf("Enter the string-");
    scanf("%[^\n]s",s); //until next line
    char c;
    int p;
    
    printf("Enter the character to be searched: ");
    scanf(" %c", &c);

    p = strchru(s, c);
    
    printf("No. of occurences = %d\n",p);
   

    return 0;
}

// OUTPUT -->> 
// Enter the string-g3rb3wb3b
// Enter the character to be searched: b
// No. of occurences = 3
