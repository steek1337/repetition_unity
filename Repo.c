// Program to create a simple calculator
// Performs addition, subtraction, multiplication or division depending the input from user

#include <stdio.h>
#include "Repo.h"

int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator);

    return 0;
}
