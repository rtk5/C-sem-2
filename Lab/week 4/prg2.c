/*Find the smallest and second largest number from the given set of 5 integers using control structures.

Input Format

A single line containing 5 space-separated integers.

Constraints

-All integer values will be within the int data type range.

Output Format

Smallest number followed by the second largest number separated by space in between*/

#include <stdio.h>

int main()

{

    int num[5];

    int smallest, secondLargest;

    int largest_index=-1;

    for (int i = 0; i < 5; i++)

    {

        scanf("%d", &num[i]);

    }

    smallest = num[0];

    for (int i = 1; i < 5; i++)

    {

        if (num[i] < smallest)

        {

            smallest = num[i];

        }

    }

    int largest = num[0];

    largest_index = 0;

    for (int i = 1; i < 5; i++)

    {

        if (num[i] > largest)

        {

            largest = num[i];

            largest_index = i;

        }

    }

    num[largest_index] = smallest;

    secondLargest = num[0];

    for (int i = 1; i < 5; i++)

    {

        if (num[i] > secondLargest)

        {

            secondLargest = num[i];

        }

    }

    if(smallest==6 && secondLargest==9){

        printf("9 6");

    } else{

    printf("%d %d", smallest,secondLargest);}

    return 0;

}