#include <stdio.h>

struct student {

    int rollno;
    char name[10];
    int mark;
};

int main() {

    struct student s2;
    
    printf("Enter values");
    scanf("%d",&s2.rollno);  
    scanf("%s",s2.name);  
    scanf("%d",&s2.mark);  

    printf("Display");
    printf("\n%d\n", s2.rollno);   
    printf("%s\n", s2.name);
    printf("%d\n", s2.mark);    

    return 0;
}
