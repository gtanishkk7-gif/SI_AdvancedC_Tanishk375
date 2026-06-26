#include <stdio.h>

void callByValue(int x)
{
    x = x + 10;
    printf("Inside Call by Value x = %d\n", x);
}

void callByReference(int *y)
{
    *y = *y + 10;
    printf("Inside Call by Reference y = %d\n", *y);
}

int main()
{
    int a = 10, b = 10;

    callByValue(a);
    printf("After Call by Value a = %d\n", a);

    callByReference(&b);
    printf("After Call by Reference b = %d", b);

    return 0;
}