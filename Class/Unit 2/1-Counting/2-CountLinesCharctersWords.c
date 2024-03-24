#include<stdio.h>
int main()
{
    int c=0,nw=0,n1=0,inword=0;
    char ch;
    printf("Enter the input-");
    while((ch=getchar())!=EOF)
    {
        c++;
        if(ch=='\n')
        n1++;
        if(!(ch==' '||ch=='\n'||ch=='\t'))
        inword=1;
    if(inword&&(ch==' '||ch=='\n'||ch=='\t'))
    {
        nw++;
        inword=0;}
    
    }
printf("\nThe no of character=%d\n",c);
printf("The no. of words =%d\n",nw);
printf("The no of lines=%d\n",n1);
return 0;
}