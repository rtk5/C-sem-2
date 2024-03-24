#include<stdio.h>
int main()
{
    int c;
    //float c;
    printf("Enter the value of c=");
    scanf("%d",&c);
switch(c)   //c must be an integer ,can't be any other
{
    //printf("Inside switch case") --> won't execute
case 1: printf("Monday");
    break;
        case 2: printf("Tue");
            break;
                case 3:printf("Wed");
                    break;
                        case 4: printf("Thu");
                            break;
                                case 5: printf("Fri");
                                    break;
                                        case 6:print("Sat");
                                            break;
                                                default: printf("Enter the correct option");
                                                        break;
}
    return 0;
}