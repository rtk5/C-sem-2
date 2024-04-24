#include <stdio.h>
#include <stdlib.h> // Needed for malloc

struct student {
    int id;
    char name[10];
    int m1;
};

void read(struct student**, int);
void dis(struct student**, int);
void sort(struct student**, int);

int main() {
    struct student *p[10]; // Array of pointers to struct student
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    read(p, n);
    printf("Before sort using array of pointers : \n");
    dis(p, n);
    sort(p, n);
    printf("After sort using array of pointers : \n");
    dis(p, n);
    return 0;
}

void read(struct student** s, int n) {
    printf("Enter student info:\n");
    for (int i = 0; i < n; i++) {
        s[i] = (struct student*)malloc(sizeof(struct student)); // Allocate memory for each student
        scanf("%d", &(s[i]->id));
        scanf("%s", s[i]->name);
        scanf("%d", &(s[i]->m1));
    }
}

void dis(struct student** s, int n) {
    printf("The student info: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", s[i]->id);
        printf("%s\n", s[i]->name);
        printf("%d\n", s[i]->m1);
    }
}

void sort(struct student* s[], int n) { // Sorting array of pointers
    struct student* t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j]->id > s[j + 1]->id) {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
}
