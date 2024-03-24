#include<stdio.h>
enum days {sun,mon,tue,wed,thu,fri,sat};
void print(enum days);
int main()
{   
    enum days d;
    printf("Enter the values: ");
    scanf("%d",*&d);
    print(d);
    return 0;
}
void print(enum days d) {
    switch(d) {
        case sun: printf("Sun");break;
        case mon: printf("Mon");break;
        case tue: printf("Tue");break;
        case wed: printf("Wed");break;
        case thu: printf("Thu");break;
        case fri: printf("Fri");break;
        case sat: printf("Sat");break;
    
    }
}
