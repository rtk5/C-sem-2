/*Write a Program in C to create a Singly Linked List with ‘n’ number of nodes. Perform the following operations in the same order: 1. Read the value of ‘n’ from user 2. Insert ‘n’ number of nodes – insert nodes to the last of the linked list (Implement using a function insertLast() ) 3. Display all the nodes – After insertion of nodes (Implement using a function display() ) 4. Delete the last node – Implement using a function deleteLast() 5. Display all the nodes – After deletion of node (Use the function display() ) 6. Free the list – Implement using a function freeList()

Input Format

The first line contains an integer, n, representing the number of nodes to be inserted into the linked list. The next n lines contain integers, each representing the value of the node to be inserted.

Constraints

1 ≤ n ≤ 1000

Output Format

Display the elements of the linked list after each operation.

Sample Input 0

5
2
3
4
1
7
Sample Output 0

Elements are:
2
3
4
1
7
Deleted element is 7
Elements are:
2
3
4
1
Sample Input 1

4
0
2
1
0
Sample Output 1

Elements are:
0
2
1
0
Deleted element is 0
Elements are:
0
2
1
Sample Input 2

3 
2
1
4
Sample Output 2

Elements are:
2
1
4
Deleted element is 4
Elements are:
2
1
Sample Input 3

1
3
Sample Output 3

Elements are:
3
Deleted element is 3
List is empty*/



#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node *header = NULL;

void insertLast(int);
void display(void);
void deleteLast(void);
void freeList(void);

int main() {
    int n, value, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &value);
        insertLast(value);
    }
    display();
    deleteLast();
    display();
    freeList();
    
    return 0;
}

void insertLast(int x) {
    struct node *newnode, *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL) {
        return;
    }
    else {
        newnode->data = x;
        newnode->link = NULL;
        if(header == NULL) {
            header = newnode;
        }
        else {
            temp = header;
            while(temp->link != NULL) {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
}

void display() {
    struct node *p = header;
    if(header == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("Elements are:\n");
    while(p != NULL) {
        printf("%d \n", p->data);
        p = p->link;
    }
}

void deleteLast() {
    struct node *temp = header;
    struct node *prev = NULL;
    while(temp->link != NULL) {
        prev = temp;
        temp = temp->link;
    }
    if(prev == NULL) {
        printf("Deleted element is %d\n", temp->data);
        free(temp);
        header = NULL; 
    }
    else {
        printf("Deleted element is %d\n", temp->data);
        prev->link = NULL;
        free(temp);
    }
}

void freeList() {
    struct node *temp;
    while(header != NULL) {
        temp = header;
        header = header->link;
        free(temp);
    }
}
