#include <stdio.h>

int main()
{
    int n, a[100], pos, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &pos);

    for(int i = 1; i <= pos; i++)
    {
        temp = a[0];

        for(int j = 0; j < n - 1; j++)
            a[j] = a[j + 1];

        a[n - 1] = temp;
    }

    printf("Array after left rotation: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}