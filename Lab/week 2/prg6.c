#include<stdio.h>
int main()
{
    float n;
    int K;
    scanf("%f",&n);
    scanf("%d",&K);
    printf("Rounded off to nearest int - %.0f \n",n);
    printf("Scientific notation - %e \n",n);
    printf("Round of to entered precession - %.*f \n",K,n);
    return 0;

}
