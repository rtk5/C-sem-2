#include <stdio.h>
#include <errno.h>
#include<string.h>

int main () {
    FILE *fp;
    fp = fopen ("File.txt", "r"); // File with this name doesn’t exist
    if(fp==NULL) {
        printf("Error occured\n");
        printf("Error no%d\n",errno);
        printf("Error type no%s\n",strerror(errno));
        perror("ERROR");
    }
    else {
        printf("File created");
    }
    return 0;
}