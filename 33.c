#include <stdio.h>

int main()
{
    int n, coef;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        for(int space = 1; space <= n - i; space++)
            printf(" ");

        coef = 1;

        for(int j = 0; j <= i; j++)
        {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}