#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Enter int and long int - ");
    int A;
    scanf("%d",&A);
    long long int B;
    scanf("%lld",&B);
    int max_int = INT_MAX ;
    long long int max_lint = LLONG_MAX ;
    printf("%d \n",max_int-A);
    printf("%lld",max_lint- B );

}