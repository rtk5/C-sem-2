#include <stdio.h>

struct student {

    int mark1;
    int mark2;
    int mark3;
  
};

int main() {

    struct student s2;
    
    printf("Enter values:\n");
    scanf("%d%d%d",&s2.mark1,&s2.mark2,&s2.mark3);   

    printf("\nTotal--> ");
    printf("%d\n", s2.mark1+s2.mark2+s2.mark3);    


    return 0;
}
