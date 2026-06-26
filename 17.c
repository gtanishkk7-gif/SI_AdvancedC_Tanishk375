#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression (Example: 5 + 2): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("Answer = %.2f", a+b);
            break;

        case '-':
            printf("Answer = %.2f", a-b);
            break;

        case '*':
            printf("Answer = %.2f", a*b);
            break;

        case '/':
            printf("Answer = %.2f", a/b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}