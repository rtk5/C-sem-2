#include<stdio.h>
void read(int (*p)[10],int,int);
int transpose (int (*p)[10],int,int);
void print(int (*p)[10],int,int);

int main() {
    int a[10][10],r,c;
    printf("Enter the rows and col: ");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    printf("Before transpose\n");
    print(a,r,c);
        printf("After transpose\n");
    transpose(a,r,c);
    return 0;
}

void read(int (*p)[10],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&p[i][j]);
        }
    }
}

void print(int (*p)[10],int r,int c) {
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
}

int transpose(int (*p)[10],int r,int c) {
    int c1[10][10];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            c1[i][j]=p[j][i];
        }
    }
    print(c1,r,c);
}


