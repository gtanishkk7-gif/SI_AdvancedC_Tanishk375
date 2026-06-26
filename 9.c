#include <stdio.h>

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if ((n & 1) == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}