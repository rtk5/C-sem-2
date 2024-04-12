#include<stdio.h>

struct book {
    int bookid;
    int price;
};

int main() {
    
    struct book b1={101,200};
    struct book *b2=&b1;

    printf("The book id = %d\n",b2->bookid);
    printf("The book price = %d\n",b2->price);

    return 0;
}