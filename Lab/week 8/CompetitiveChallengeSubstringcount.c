/*
Write a program in C that determines the total occurrences of a substring in a sentence. (Note: You are allowed to use strlen() to find the length of substring and sentence, if required).

Input Format

The sentence in the first line. The substring to search for in the second line.

Constraints

The substring should not have spaces.

Output Format

The total occurrences of the substring in the sentence.

Sample Input 0

hello world
hello
Sample Output 0

Count = 1
Sample Input 1

abababab
ab
Sample Output 1

Count = 4
Sample Input 2

Betty bought some butter, but the butter was bitter
butter
Sample Output 2

Count = 2
Sample Input 3

PES University
hello
Sample Output 3

Count = 0*/


#include <stdio.h>
#include <string.h>

int Occurrences(char *sen, char *sub) {
    int count = 0;
    int senL = strlen(sen);
    int subL = strlen(sub);
    for (int i = 0; i <= senL - subL; i++) {
        int j;
        for (j = 0; j < subL; j++) {
            if (sen[i + j] != sub[j])
                break;
        }
        if (j == subL)
            count++;
    }
    return count;
}

int main() {
    char sen[1000];
    char sub[100];
    fgets(sen, sizeof(sen), stdin);
    if (sen[strlen(sen) - 1] == '\n')
        sen[strlen(sen) - 1] = '\0';
    scanf("%s", sub);
    int oc = Occurrences(sen, sub);
    printf("Count = %d\n", oc);
    return 0;
}
