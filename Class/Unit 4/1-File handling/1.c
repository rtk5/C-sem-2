#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("fff.txt","r");
    if(fp==NULL){
        printf("error");
    }
    else{
        printf("file created");
        fclose(fp);
        return 0;
    }
}
