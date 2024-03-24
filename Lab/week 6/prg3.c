//Competitive Challenge: LCM of 2 numbers

/*Write a recursive program to find LCM (Least Common Multiple) of 2 positive integers.

Note: For this solution, knowledge about static storage class is required.

Input Format

A single line containing 2 integers.

Constraints

Both integers within the range of 1 to 100.

Output Format

The LCM of {number1} and {number2} : {LCM}*/

#include <stdio.h>

int lcm(int a, int b) {
    static int m=0;
    m=m+b;
    if (m%a==0 && m%b==0)
        return m;
    else 
     return   lcm(a,b);
}
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int res;
    if (n1>n2)
        res = lcm(n1,n2);
    else 
        res = lcm(n2,n1);
    printf("The LCM of %d and %d : %d\n", n1, n2, res);
    return 0;
}
