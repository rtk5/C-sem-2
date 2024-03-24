#include <stdio.h>
void count(int*,int);
int main()
{
    int a[]={1,2,3,4,5};
    int n =sizeof(a)/sizeof(a[0]);
    count(a,n);
    return 0;
}

void count(int *b,int n) 
{
    int even=0,odd=0;
    for (int i=0; i<n;i++) 
    {
        if(b[i] & 1)        //b[i] can also be *b++
            odd++;
        else 
            even++;
    }
    printf("Number of even elements: %d\n",even);
    printf("Number of odd elements: %d\n",odd);
}
