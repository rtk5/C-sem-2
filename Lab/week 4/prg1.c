/*Write a C program to perform simple tasks based on operators. Use switch case statements.

If $ Take next 3 floating point numbers input as P, R and T respectively and calculate simple interest 
If ! - Take next 2 integers and perform arithmetic operations, that is, '+', '-', '*', '/'. 
Take the operator also as input. 
If ? - Take next 2 integers and perform bitwise operations, that is, &, |, Left shift (<) and Right shift(>). 
Take operator also as input.*/

#include <stdio.h>

int main() {

    char operation;

    float P, R, T;

    int num1, num2;

    char operator;

    scanf("%c", &operation);

    switch(operation) {

        case '$':

            scanf("%f %f %f", &P, &R, &T);

            if(T == 0) {

                printf("Error");

                break;

            }

            printf("%.2f", (P * R * T) / 100);

            break;

        case '!':

            scanf("%d %d %c", &num1, &num2, &operator);

            switch(operator) {

                case '+':

                    printf("%d", num1 + num2);

                    break;

                case '-':

                    printf("%d", num1 - num2);

                    break;

                case '*':

                    printf("%d", num1 * num2);

                    break;

                case '/':

                    if(num2 == 0) {

                        printf("Error");

                        break;

                    }

                    printf("%.2f", (float)num1 / num2);

                    break;

                default:

                    printf("Invalid operator");

            }

            break;

        case '?':

            scanf("%d %d %c", &num1, &num2, &operator);

            switch(operator) {

                case '&':

                    printf("%d", num1 & num2);

                    break;

                case '|':

                    printf("%d", num1 | num2);

                    break;

                case '<':

                    printf("%d", num1 << num2);

                    break;

                case '>':

                    printf("%d", num1 >> num2);

                    break;

                default:

                    printf("Invalid operator");

            }

            break;

        default:

            printf("Invalid operation");

    }

    return 0;

}

