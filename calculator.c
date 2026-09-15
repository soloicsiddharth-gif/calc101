#include <stdio.h>

int main()
{
    double firstNumber;
    double secondNumber;
    double answer;
    char operation;

    printf("Simple Calculator\n");

    printf("Enter first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%lf", &secondNumber);

    if (operation == '+')
    {
        answer = firstNumber + secondNumber;
        printf("Answer = %.2lf\n", answer);
    }
    else if (operation == '-')
    {
        answer = firstNumber - secondNumber;
        printf("Answer = %.2lf\n", answer);
    }
    else if (operation == '*')
    {
        answer = firstNumber * secondNumber;
        printf("Answer = %.2lf\n", answer);
    }
    else if (operation == '/')
    {
        if (secondNumber == 0)
        {
            printf("Cannot divide by zero.\n");
        }
        else
        {
            answer = firstNumber / secondNumber;
            printf("Answer = %.2lf\n", answer);
        }
    }
    else
    {
        printf("Invalid operation.\n");
    }

    return 0;
}
