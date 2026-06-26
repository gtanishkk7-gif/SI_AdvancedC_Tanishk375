#include <stdio.h>

int main()
{
    int n, a[100], b[100], temp;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter first array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n; i++)
    {
        temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }

    printf("First array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSecond array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}