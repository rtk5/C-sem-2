#include<stdio.h>

struct sam {
    int a;
    float b;
};

void dis1(struct sam *);
void dis2(struct sam **);
void swap(struct sam**, struct sam**);

int main() {
    struct sam s1[] = { {1, 1.1}, {2, 2.2}, {3, 3.3} };
    struct sam *pr[10];
    for(int i = 0; i < 3; i++) {
        pr[i] = &s1[i];
    }
    printf("Before swap\n");
    dis1(s1);
    dis2(pr);
    swap(&pr[0], &pr[2]);
    printf("After swap\n");
    dis1(s1);
    dis2(pr);
    return 0;
}

void dis1(struct sam *s1) {
    for(int i = 0; i < 3; i++) {
        printf("%d\n", s1[i].a);
        printf("%.2f\n", s1[i].b);
    }
}

void dis2(struct sam **s1) {
    for(int i = 0; i < 3; i++) {
        printf("%d\n", s1[i]->a);
        printf("%.2f\n", s1[i]->b);
    }
}

void swap(struct sam** a, struct sam** b) {
    struct sam* t = *a;
    *a = *b;
    *b = t;
}
