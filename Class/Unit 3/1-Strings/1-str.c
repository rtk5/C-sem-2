#include<stdio.h>
int main() {
char a[]={'p','e','s'};
printf("%d\n",sizeof(a));

char b[]="pes";
printf("%d\n",sizeof(b));

printf("%s\n",a);
printf("%s\n",a);
return 0;
}

/* OUTPUT -->>
3
4
pes
pes
*/