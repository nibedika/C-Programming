/*
* C program to create a simple calculator using switch...case statement
*/
#include<stdio.h>
int main()
{
    char operator;
    float num1,num2;

    printf("Enter two numbers as operands\n");
    scanf("%f%f", &num1, &num2);
    printf("Enter an arithemetic operator(+-*/)\n");
    scanf("%*c%c",&operator);

    switch(operator)
    {
        case '+':
                printf("%.2f + %.2f = %.2f",num1, num2, num1+num2);
                break;
        case '-':
                printf("%.2f - %.2f = %.2f",num1, num2, num1-num2);
                break;
        case '*':
                printf("%.2f * %.2f = %.2f",num1, num2, num1*num2);
                break;
        case '/':
                printf("%.2f / %.2f = %.2f",num1, num2, num1/num2);
                break;
        default:
                printf("ERROR: Unsupported Operation");
    }
    return 0;
}
