#include<stdio.h>
int main() {
    char*p1="bits";
    *(p1+1)='e';        //won't update
    printf("%s \n",*p1);    
    
    return 0;
}