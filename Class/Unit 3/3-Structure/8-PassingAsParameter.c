#include<stdio.h>

struct player {
    int id;
    char name[10];
};

void read(struct player*);
void dis(struct player);

int main () {
    struct player p;
    read(&p);
    dis(p);
    return 0;
}

void read(struct player *p1) {
    printf("Enter the details:");
    scanf("%d",&(p1->id));
    scanf("%s",p1->name);
}

void dis(struct player p1) {
    printf("Display the details\n");
    printf("%d\n",p1.id);
    printf("%s",p1.name);
}