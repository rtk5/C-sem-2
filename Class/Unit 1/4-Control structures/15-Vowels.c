#include<stdio.h>
int main()
{
char c;
int a=0,i=0,l;
printf("ENter the limit-");
scanf("%d",&l);
getchar();
while(i<l)
    {
        printf("Enter the character-");
        scanf("%c",&c);
        getchar();
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            a+=1;
        i+=1;    
    }
printf("The no. of vowels entered=%d\n",a);
return 0;
}