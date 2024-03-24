#include<stdio.h>

int main() {
    int no, rev = 0, d, d1, no1;
    
    printf("Enter the number: ");
    scanf("%d", &no);
    
    // Reverse the number
    no1 = no; // Save the original number
    while (no1 != 0) {
        d = no1 % 10;
        rev = rev * 10 + d;
        no1 = no1 / 10;
    }
    
    printf("The reversed number is %d\n", rev);
    
    // Print words corresponding to digits
    no1 = rev; // Reset to the reversed number
    while (no1 != 0) {
        d1 = no1 % 10;
        switch (d1) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            // Add cases for other digits if needed
            // Make sure to handle all digits from 0 to 9
        }
        no1 = no1 / 10;
    }
    
    return 0;
}
