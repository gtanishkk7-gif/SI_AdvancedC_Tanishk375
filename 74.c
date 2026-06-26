#include <stdio.h>

int main()
{
    int a, b;
    int *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    printf("Sum = %d", *p + *q);

    return 0;
}