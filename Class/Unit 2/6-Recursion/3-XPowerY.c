//x power y

#include<stdio.h>
int power(int a,int b) {
    if(b==0) {
        return 1;
    }
    else {
        return a* power(a,b-1);
    }
}
int main()
{  
    int n,m;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter to the power: ");
    scanf("%d",&m);
    printf("The result is %d \n",power(n,m));


    return 0;
}