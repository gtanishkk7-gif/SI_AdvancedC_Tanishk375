#include <stdio.h>

int main()
{
    int n, a[100];
    int *p;

    printf("Enter size: ");
    scanf("%d", &n);

    p = a;

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", p + i);

    printf("Array elements: ");
    for(int i = 0; i < n; i++)
        printf("%d ", *(p + i));

    return 0;
}