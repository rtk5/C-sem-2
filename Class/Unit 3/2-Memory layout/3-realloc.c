#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("Enter the size: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));
   printf("Address before realloc: %p\n", ptr);

    if (ptr == NULL) {
        printf("Error in allocation of memory\n");
        return 1;
    } else {
        printf("Enter %d elements:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", (ptr + i));
        }

        printf("Display the elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", *(ptr + i));
        }
        printf("\n");

        // Reallocate memory
        ptr = (int*)realloc(ptr, 10 * sizeof(int));
        printf("Address after realloc: %p\n", ptr);

        if (ptr == NULL) {
            printf("Error in reallocation of memory\n");
            return 1;
        }

        printf("Enter new elements:\n");
        for (int i = n; i < 10; i++) {
            scanf("%d", (ptr + i));
        }

        printf("Display the elements after realloc: ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", *(ptr + i));
        }
        printf("\n");

        // Free the allocated memory
        free(ptr);
    }

    return 0;
}
