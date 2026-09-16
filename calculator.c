#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double firstNumber;
    double secondNumber;
    double answer;
    double angle;
    char operation[10];

    printf("=== Scientific Calculator v2.0 ===\n");
    printf("Enter operation (+, -, *, /, sin, cos, tan): ");
    scanf("%9s", operation);

    if (strcmp(operation, "sin") == 0 ||
        strcmp(operation, "cos") == 0 ||
        strcmp(operation, "tan") == 0)
    {
        printf("Enter angle in degrees: ");
        scanf("%lf", &angle);

        double radians = angle * 3.141592653589793 / 180.0;

        if (strcmp(operation, "sin") == 0)
        {
            answer = sin(radians);
            printf("Answer = %.4lf\n", answer);
        }
        else if (strcmp(operation, "cos") == 0)
        {
            answer = cos(radians);
            printf("Answer = %.4lf\n", answer);
        }
        else
        {
            answer = tan(radians);
            printf("Answer = %.4lf\n", answer);
        }
    }
    else
    {
        printf("Enter first number: ");
        scanf("%lf", &firstNumber);

        printf("Enter second number: ");
        scanf("%lf", &secondNumber);

        if (strcmp(operation, "+") == 0)
        {
            answer = firstNumber + secondNumber;
            printf("Answer = %.2lf\n", answer);
        }
        else if (strcmp(operation, "-") == 0)
        {
            answer = firstNumber - secondNumber;
            printf("Answer = %.2lf\n", answer);
        }
        else if (strcmp(operation, "*") == 0)
        {
            answer = firstNumber * secondNumber;
            printf("Answer = %.2lf\n", answer);
        }
        else if (strcmp(operation, "/") == 0)
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
    }

    return 0;
}
