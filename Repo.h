#include <stdio.h>
double firstNumber,secondNumber;

double value1()
{
    char operator;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    double firstNumber,secondNumber;
    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
}

double calc()
{
    char operator;
    switch(operator)
    {
        case '+':
        printf("%lf + %lf = %lf",firstNumber, secondNumber, firstNumber+secondNumber);
        break;

        case '-':
        printf("%lf - %lf = %lf",firstNumber, secondNumber, firstNumber-secondNumber);
        break;

        case '*':
        printf("%lf * %lf = %lf",firstNumber, secondNumber, firstNumber*secondNumber);
        break;

        case '/':
        printf("%lf / %lf = %lf",firstNumber, secondNumber, firstNumber/firstNumber);
        break;

        // operator is doesn't match any case constant (+, -, *, /)
        default:
        printf("Error! operator is not correct");
    }
}
