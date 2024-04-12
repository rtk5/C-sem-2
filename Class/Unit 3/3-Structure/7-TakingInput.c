#include<stdio.h>

struct student {
    int id;
    char name[10];
    int m1, m2, m3;
    int total;
} s[10];

int main() {
    for (int i = 0; i < 3; i++)
        scanf("%d", &s[i].id);
    for (int i = 0; i < 3; i++)
        printf("ids are %d\t", s[i].id);
    return 0;
}
