#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    int n;

    printf("Enter the size ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));        //alocates a block which is stored in a pointer

    if(ptr==NULL) {
        printf("Error in allocation of memory\n");
    }
    else
        for(int i=0;i<n;i++) {
            scanf("%d",(ptr+i));
        }

    printf("Display the elements \n");

    for(int i=0;i<n;i++) {
            printf("%d\n",*(ptr+i));
        }

        // Free the allocated memory
        free(ptr);

 printf("Display the elements after deallocation\n");

    for(int i=0;i<n;i++) {
            printf("%d\n",*(ptr+i));
        }

    return 0;
}
