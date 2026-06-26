#include <stdio.h>

int main()
{
    int n, a[100], candidate, count = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = a[i];
            count = 1;
        }
        else if(a[i] == candidate)
            count++;
        else
            count--;
    }

    count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == candidate)
            count++;
    }

    if(count > n / 2)
        printf("Majority Element = %d", candidate);
    else
        printf("No Majority Element");

    return 0;
}