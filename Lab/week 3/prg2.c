/*Write a program that prints the number of days in the given month as input for the year 2024.
Input should be the month’s number.
 For example, for “January,” the input is 1 and program should display 31.
Input Format
1-12 positive value month no
Constraints
only positive
Output Format
no of days in month -integer value*/
#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main() {

int a;

    scanf("%d",&a);

    if (a<=0)

        printf("Invalid input");

    switch (a)

    {

      

        case 1:       printf("31");

            break;

    case 2:       printf("29");

            break;

    case 3:       printf("31");

            break;

    case 4:       printf("30");

            break;

    case 5:       printf("31");

            break;

    case 6:       printf("30");

            break;

    case 7:       printf("31");

            break;

    case 8:       printf("31");

            break;

    case 9:       printf("30");

            break;

    case 10:       printf("31");

            break;

    case 11:       printf("30");

            break;

    case 12:       printf("31");

            break;

default : printf("Invalid Entry");

   

        

    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    return 0;

}

