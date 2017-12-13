switch(operator)
{
    case '+':
    printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber+secondNumber);
    break;

    case '-':
    printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber-secondNumber);
    break;

    case '*':
    printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber*secondNumber);
    break;

    case '/':
    printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber/firstNumber);
    break;

    // operator is doesn't match any case constant (+, -, *, /)
    default:
    printf("Error! operator is not correct");
}
