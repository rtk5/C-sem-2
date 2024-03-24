/*Sam has given a task of listing Leap years from 1000 AD to till date. 
Write a C program that takes a year as input and prints if it is a Leap Year or Not.
Input Format
Positive Integer
Constraints
only positive
Output Forma
leap or not leap year*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int year;
    scanf("%d",&year);
if(((year%4==0) && ((year%400==0) || (year%100!=0))  ))
    {  
        printf("Leap Year.");  }
    else if (year<=0)
        printf("Invalid year");
     else {  
        printf("Not a Leap Year.");  
    }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
