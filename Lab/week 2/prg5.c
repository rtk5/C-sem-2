#include <stdio.h>

int main() {
    char lowercase, uppercase;
    
    printf("Enter a lowercase letter: ");
    scanf("%c", &lowercase);
    
    uppercase = lowercase - 32;
    
    printf("Uppercase letter: %c\n", uppercase);
    
    return 0;
}
