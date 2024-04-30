#include<stdio.h>
struct s {
    unsigned int b:1;
    int x:3;
}s1;

int main() {
    printf("The sizeof = %d\n",sizeof(s1));
    s1.b=-1;
    s1.x=7;
    printf("The value = %d\n",s1.b);
    printf("The value = %d\n",s1.x);

    return 0;

}