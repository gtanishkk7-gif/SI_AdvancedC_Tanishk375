#include <stdio.h>

int main()
{
    int n, a[100], low = 0, mid = 0, high, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    high = n - 1;

    printf("Enter only 0s, 1s and 2s: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while(mid <= high)
    {
        if(a[mid] == 0)
        {
            temp = a[low];
            a[low] = a[mid];
            a[mid] = temp;
            low++;
            mid++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else
        {
            temp = a[mid];
            a[mid] = a[high];
            a[high] = temp;
            high--;
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}