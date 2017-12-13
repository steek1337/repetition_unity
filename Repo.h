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
