#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,};
    int *ptr =a;
    for(int i=0;i<=4;i++)
    {
      //  printf("%u\n",*++ptr);  //starts from 1st index

/*2
3
4
5
4   -->> undefined value
*/

   // printf("%d\n",i[ptr]);
/*1
2
3
4
5
*/

//printf("%d\n",ptr[i]);    //similar to previous one
    }
return 0;
}