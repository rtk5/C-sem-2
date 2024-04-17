#include<stdio.h>

struct student {
    int id;
    char name[10];
    struct dob {
        int d;
        int m;
        int y;
    }d1;
};

int main() {
    struct student s1;
    printf("Enter details");
    scanf("%d",&s1.id);
    scanf("%s",s1.name);
    scanf("%d",&s1.d1.d);
    scanf("%d",&s1.d1.m);
    scanf("%d",&s1.d1.y);


    printf("Display the details\n");
    printf("ID: %d\n",s1.id);
    printf("Name: %s\n",s1.name);
    printf("DOB:%d/",s1.d1.d);
    printf("%d/",s1.d1.m);
    printf("%d\n",s1.d1.y);
  
    return 0;
}