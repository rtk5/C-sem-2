#include<stdio.h>
struct sam {
    int a;
    float b;
};

int main() {
    struct sam s1[]={{1,1.0},{2,2.0},{3,3.0}};
    struct sam *p[10];
    int n=sizeof(s1)/sizeof(*s1);
    for(int i=0;i<n;i++) {
        p[i]=&s1[i];
    }
        printf("The address\n");
    for(int i=0;i<n;i++) {
        printf("%p\n",p[i]);
        printf("%p\n",&s1[i]);

    }
        printf("The value\n");
    for(int i=0;i<n;i++) {
        printf("using pointer %d\t %f\n",p[i]->a,p[i]->b);
        printf("using array of structure variable %d \t %f \n",s1[i].a,s1[i].b);
}
}