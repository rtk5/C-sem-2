#include<stdio.h>
#include<stdlib.h>

int main() {
    int *p=(int *)malloc(sizeof(int));
    *p=10;

    printf("address = %p\n",p);
    printf("Value = %d\n",*p);
    
    free(p);
     p=NULL;    //without this pointer value will be an undefined value!
        // null makes address as (nil)              [see output]
    printf("address = %p\n",p);
    printf("Value = %d\n",*p);

    return 0;
}
// OUTPUT -->>      (without null)
// address = 0x5591e0f532a0
// Value = 10
// address = 0x5591e0f532a0
// Value = 1495142227       -->> undefined value

// after p=NULL
// address = 0x55e7959c22a0
// Value = 10
// address = (nil)
// Segmentation fault (core dumped)