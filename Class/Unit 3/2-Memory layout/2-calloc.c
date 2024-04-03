#include<stdio.h>
#include<stdlib.h>

int main () {
    int *ptr;
    int n;

    printf("Enter the size ");
    scanf("%d",&n);

    ptr=(int*)calloc(n,sizeof(int));        //alocates a block which is stored in a pointer

    if(ptr==NULL) {
        printf("Error in allocation of memory");
    }
    else
        for(int i=0;i<n;i++) {
            scanf("%d",(ptr+i));
        }

    printf("Display the elements ");

    for(int i=0;i<n;i++) {
            printf("%d",*(ptr+i));
        }

        // Free the allocated memory
        free(ptr);
        
    return 0;
}