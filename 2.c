#include <stdio.h>

int main()
{
    int num;
    float decimal;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");122
    scanf("%f", &decimal);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\n----- Output -----\n");
    printf("Integer = %d\n", num);
    printf("Float = %.2f\n", decimal);
    printf("Character = %c\n", ch);

    return 0;
}