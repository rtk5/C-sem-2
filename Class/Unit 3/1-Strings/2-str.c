#include<stdio.h>
int main() {
char a[10]={'p','e','s','\0'};
printf("%d\n",sizeof(a));

char b[]="pes";
printf("%d \n",sizeof(b));

printf("%s\n",a);
printf("%s\n",a);
return 0;
}

/* OUTPUT -->>
10
4
pes
pes

*/