#include<stdio.h>
void read(int (*p)[10],int,int);
int identity(int (*p)[10],int,int);

int main() {
    int a[10][10],r,c;
    printf("Enter the rows and col: ");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    int f=identity(a,r,c);
    if(f==1)
        printf("Identity matrix\n");
    else
        printf("Not an identity matrix\n");

    return 0;
}

void read(int (*p)[10],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&p[i][j]);
        }
    }
}

int identity(int (*p)[10], int r, int c) {
    if (r != c) // If the number of rows is not equal to the number of columns, it can't be an identity matrix
        return 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j && p[i][j] != 1) // If the diagonal element is not 1, it's not an identity matrix
                return 0;
            if (i != j && p[i][j] != 0) // If non-diagonal elements are not 0, it's not an identity matrix
                return 0;
        }
    }
    return 1; // If all conditions are satisfied, it's an identity matrix
}



