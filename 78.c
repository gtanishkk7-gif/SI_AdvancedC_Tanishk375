#include <stdio.h>

int main()
{
    int n, a[100], temp;
    int *start, *end;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    start = a;
    end = a + n - 1;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}