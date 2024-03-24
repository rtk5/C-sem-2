//No.of elements in array divisible by 11
#include<stdio.h>
int main() {
    int a[10];
    int n,c=0;
    int *p=a;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) {
        if(*(p+i)%11 ==0) {
            c++;
        }
    }
    printf("The no. of elements divisible by 11 is %d\n",c);

    return 0;
}