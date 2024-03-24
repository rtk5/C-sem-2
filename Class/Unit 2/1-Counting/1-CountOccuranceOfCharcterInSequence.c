#include<stdio.h>
int main()
{
    int c=0;
    char c1,ch;
    printf("Enter the character-");
    scanf("%c",&c1);
    printf("Enter the charcter seq-");
    while((ch=getchar())!=EOF) //EOF --> ctrl+d
    {
        if(c1==ch)
            c++;
    }
    printf("The no of times the character appeared is - %d\n",c);
    return 0;
}
/*OUTPUT -->>
Enter the character-e
Enter the charcter seq-e
g
f
s
f
g
e
s
f
h
e
The no of times the character appeared is - 3*/