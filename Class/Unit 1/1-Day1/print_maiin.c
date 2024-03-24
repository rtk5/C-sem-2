#include<stdio.h>
int main()
{
int a,b;
a = 16,b=78;
float c = 2.5;
printf("%d %d\n",sizeof(a),sizeof(short int));
printf("%4.2f\n",c); // width.precission , f is float type
printf("%2.1f\n",c);
printf("%-5d %d\n",16,b); // - is for left justification
printf("ravan\rram\n");
printf("ram\nlakhan\n");
printf("ram\tbheem\n");
printf("\"Mahabharath\""); // To include quotes in the output
return 0;
}