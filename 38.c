#include <stdio.h>

int main()
{
    int n, a[100], temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}