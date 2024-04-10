#include <stdio.h>

struct student {

    int rollno;
 //   int rollno2 = 101;      // compile time error
    char name[10];
    int mark;
};

int main() {

    struct student s1 = {10, "xyz", 40};
    struct student s2;
    printf("Display\n");
    printf("%d\n", s1.rollno);
    printf("%s\n", s1.name);
    printf("%d\n\n", s1.mark);

    printf("%d\n", s2.rollno);      //garbage values ->> 0 0
    printf("%s\n", s2.name);
    printf("%d\n", s2.mark);    

    return 0;
}

/*OUTPUT -->>
Display
10
xyz
40
*/