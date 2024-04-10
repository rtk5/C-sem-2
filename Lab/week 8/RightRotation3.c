/*
Write a program in C that reads a word and perform the Right Rotation of the given word by a number n. (Note: You are allowed to use strlen() to find the length of the word, if required).

Input Format

The user will enter a word as input in the first line. Followed by an integer n which represents the number of right rotations.

Output Format

The program prints the word after performing the right rotation n times

Sample Input 0

hello
2
Sample Output 0

lohel
Sample Input 1

program
3
Sample Output 1

ramprog
Sample Input 2

University
5
Sample Output 2

rsityUnive
Sample Input 3

racecar
4
Sample Output 3

ecarrac
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void right(char *s, int n) {
    int len = strlen(s);
    char temp;
    
    for (int i = 0; i < n; i++) {
        temp = s[len - 1];
        
        for (int j = len - 1; j > 0; j--) {
            s[j] = s[j - 1];
        }
        
        s[0] = temp;
    }
}

int main() {
    char word[100];
    int n;

    scanf("%s", word);
    scanf("%d", &n);

    right(word, n);

    printf("%s", word);

    return 0;
}
