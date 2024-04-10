/*A ROT Cipher is a data encryption technique in which a given message is encrypted by shifting the letters in the given message by a certain number known as key. Here is an example of data encryption by ROT Cipher: Original Message: abc Key:25 Encrypted message: zab Write a program to read the message and the key value. Design a solution which prints the encrypted message using ROT Cipher technique.(Note:do not use any string inbuilt functions)

Input Format

The original message (a string) on the first line. The key value (an integer) on the next line.

Constraints

The message contains only alphabets.

Output Format

The encrypted message.

Sample Input 0

hello
3
Sample Output 0

khoor
Sample Input 1

Welcome to PES
2
Sample Output 1

Ygneqog vq RGU
Sample Input 2

Admissions are now open
2
Sample Output 2

Cfokuukqpu ctg pqy qrgp
Sample Input 3

hackerrank
26
Sample Output 3

hackerrank*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void encryptMessage(char *mes, int key) {
    while (*mes != '\0') {
        if (*mes >= 'A' && *mes <= 'Z') {
            *mes = key%26 + *mes;
        }
        else if (*mes >= 'a' && *mes <= 'z') {
            *mes = key%26+ *mes;
        }
        mes++;
    }
}

int main() {
    char message[1000];
    int key;

    scanf("%[^\n]s", message);
    getchar(); 
    scanf("%d",&key);
    encryptMessage(message,key);
    printf("%s", message);
    return 0;
}
