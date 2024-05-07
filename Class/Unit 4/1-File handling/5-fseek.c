#include<stdio.h>
int main() {
    FILE *fp;
    fp=fopen("r1.txt","w");
    printf("open = %ld\n",ftell(fp));
    fputs("Hai hello welcome",fp);
    fseek(fp,5,SEEK_SET);
    printf("after seek = %ld\n",ftell(fp));
    fseek(fp,5,SEEK_CUR);
    printf("After seek1 = %ld\n",ftell(fp));
    fseek(fp,-2,SEEK_END);
    printf("After seek2 = %ld\n",ftell(fp));
    fclose(fp);
    return 0;
}
