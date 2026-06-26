#include <stdio.h>

int main()
{
    int n, a[100], b[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        *(b + i) = *(a + i);

    printf("Copied array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}