#include<stdio.h>

int main() {
    FILE *fp;
    char s[30];

    fp = fopen("rrr.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fputs("welcome to pes", fp);

    fclose(fp);

    fp = fopen("rrr.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fgets(s, sizeof(s), fp);

    printf("%s\n", s);

    fclose(fp);

    return 0;
}
