//Write a c progrram to check if the given number is automorphic or not
//Note a number n whose square ends with n is automorphic

#include<stdio.h>
#include<math.h>
int main() {
    int n,c=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int s=n*n;
    int t=n;
    while(n!=0) {
        n=n/10;
        c++;
    }
    int cd=s%(int)pow(10,c);
    if(cd==t) {
        printf("Number is Automorphic\n");
    }
    else {
        printf("Number is not automorphic\n");
    }
    return 0;

}

//gcc -o prg 2-Automorphic.c -lm
 //./prg
 //syntax to run 