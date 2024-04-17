#include<stdio.h>

struct student {
    int id;
    char name[10];
    int m1, m2, m3;
    int total;
};

int main() {
    struct student s[2]; // Define an array of struct student with size 2
    printf("Enter details\n");
    for(int i = 0; i < 2; i++) {
        printf("Details for student %d:\n", i+1);
        scanf("%d", &s[i].id);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].m1);
        scanf("%d", &s[i].m2);
        scanf("%d", &s[i].m3);
        // Calculate total marks
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }
    printf("Display details\n");
    for(int i = 0; i < 2; i++) {
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Mark 1: %d\n", s[i].m1);
        printf("Mark 2: %d\n", s[i].m2);
        printf("Mark 3: %d\n", s[i].m3);
        printf("TOTAL: %d\n", s[i].total);
    }
    
    return 0;
}
