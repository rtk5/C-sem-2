#include<stdio.h>
#include<string.h>

int main() {
    char st[10] = "haihello";
    char c;
    char *p;
    printf("Enter the character to be searched: ");
    scanf("%c", &c); 
    printf("Value of p is %d\n",p);
    p = strchr(st, c);

    if (p) { 
        printf("The character '%c' is found at position %ld\n", c,(p - st));     //st has base address 
    } else {                                                                    //and p has adress of chr
        printf("Character '%c' not found.\n", c);
    }

    return 0;
}
