#include<stdio.h>
#include<math.h>        //gcc -o prg 26-PrintingArmstrongs2.c -lm
int main()              //./prg
{                    //syntax to run 
int no,i,rev=0,d,count=0,temp,number,length;
printf("enter the limit-");
scanf("%d",&no);
for(i=1;i<=no;i++)
{       number=i;
        length=0;
      while (number != 0) 
      {
            length++;
            number /= 10;
        }
    temp=i;
    rev=0;
       while(temp!=0)
        {
            d=temp%10;
            rev=rev+pow(d,length);
            temp=temp/10;
        }
    if (i==rev)
        printf("%d ",i);
}

return 0;
}