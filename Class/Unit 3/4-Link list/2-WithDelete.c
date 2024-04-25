#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node *header = NULL;

void addbeg(int);
void display(void);
void delatbeg(void); // Added prototype for delatbeg()

int main() {
    int x, opt;
    while(1) {
        printf("Enter the option (1. Add element to the beginning, 2. Display list, 3. Exit): ");
        scanf("%d", &opt);
        switch(opt) {
            case 1: 
                printf("Enter element to be inserted: ");
                scanf("%d", &x);
                addbeg(x);
                break;
            case 2:
                printf("Linked List: ");
                display();
                break;
            case 3:
                delatbeg(); // Corrected the function call
                exit(0); // Exit the program
            default:
                printf("Invalid option\n");
        }
    }
    return 0;
}

void addbeg(int x) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
        printf("Out of memory\n");
        return;
    }
    else {
        newnode->data = x;
        newnode->link = header;
        header = newnode;
    }
}

void display() {
    struct node *p = header;
    while(p != NULL) {
        printf("%d\n", p->data);
        p = p->link;
    }
}

void delatbeg() {
    if(header == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node *p = header;
    printf("Deleted element: %d\n", p->data);
    header = header->link;
    free(p);
}
