/*Write a program that takes a student's score as input and prints their corresponding letter grade according
to the following scale:
A (90-100), B (80-89), C (70-79), D (60-69), F (0-59).
Input Format
Any positive integer between 0 -100
Constraints
positive no
Output Format
coressponding grade*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a;
scanf("%d",&a);
if (a>=90)
    printf("A\n");
else if (a>=80)
    printf("B\n");
 else   if (a>=70)
    printf("C\n");
 else   if (a>=60)
    printf("D\n");
else
    printf("F\n");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
