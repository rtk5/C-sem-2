#include<stdio.h>
int fact(int a){
    if (a==0||a==1) {
        return 1;
    }
    else  {
        return a*fact(a-1);
    }
}
int main() {

    // //without using recursion
    // int fact=1,n=4;
    // for(int i=1;i<=4;i++) {
    //     fact*=i;
    // }
    // printf("%d\n",fact);

    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d\n",res);
    return 0;
}
