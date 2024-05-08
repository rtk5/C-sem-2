#include<stdio.h>
int main() {
    FILE *fp;
    fp=fopen("matches.csv","r");
    char line[500];
    char *var;
    while(fgets(line,500,fp)!=NULL) {
        //puts(line);
        var=strtok(line);
    }
    return 0;
}