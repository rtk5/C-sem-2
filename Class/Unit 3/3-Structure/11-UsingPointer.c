#include<stdio.h>

struct student {
    int id;
    char name[10];
    int m1, m2, m3;
    int total;
};

int main() {
    struct student s[2]; 
    struct student *p = s; // Declaring a pointer to the first element of the array s

    printf("Enter details\n");
    for(int i = 0; i < 2; i++) {
        printf("Details for student %d:\n", i+1);
        scanf("%d", &p[i].id);
        scanf("%s", p[i].name);
        scanf("%d", &p[i].m1);
        scanf("%d", &p[i].m2);
        scanf("%d", &p[i].m3);
        // Calculate total marks
        p[i].total = p[i].m1 + p[i].m2 + p[i].m3;
    }
    printf("Display details\n");
    for(int i = 0; i < 2; i++) {
        printf("ID: %d\n", p[i].id);
        printf("Name: %s\n", p[i].name);
        printf("Mark 1: %d\n", p[i].m1);
        printf("Mark 2: %d\n", p[i].m2);
        printf("Mark 3: %d\n", p[i].m3);
        printf("TOTAL: %d\n", p[i].total);
    }
    
    return 0;
}
