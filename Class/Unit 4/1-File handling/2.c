#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    char c1[10] = "haihello";

    // Open file for writing
    fp = fopen("fff1.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write string to file
    fprintf(fp, "%s", c1);

    // Close file
    fclose(fp);

    // Open file for reading
    fp = fopen("fff1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read characters from file and print them
    c = fgetc(fp);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(fp);
    }

    // Close file
    fclose(fp);

    return 0;
}
