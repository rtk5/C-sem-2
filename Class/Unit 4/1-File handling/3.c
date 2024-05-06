#include <stdio.h>

int main() {
    FILE *fp1;
    FILE *fp2;
    char c;

    fp1 = fopen("src.txt", "r");  // Open source file for reading
    if (fp1 == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    fp2 = fopen("des.txt", "w"); // Open destination file for writing
    if (fp2 == NULL) {
        printf("Error opening destination file!\n");
        fclose(fp1);
        return 1;
    }

    rewind(fp1); // Move the file position indicator to the beginning of the file

    c = fgetc(fp1); // Read the first character from source file
    while (c != EOF) {
        fputc(c, fp2); // Write character to destination file
        c = fgetc(fp1); // Read next character from source file
    }

    fclose(fp1); // Close source file
    fclose(fp2); // Close destination file

    return 0;
}
