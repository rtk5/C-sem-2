#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int (*p)[3]=a;
    //printf("%d\n",a[1][2]);
    printf("%d\n",p[1][2]);
    printf("%d\n",*(*(p+1)+2));
        // printf("%d\n",*(*(a+1)+2));  //works the same

    return 0;
}
