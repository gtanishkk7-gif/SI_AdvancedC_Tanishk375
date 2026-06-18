#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int n = 12;
    int leftmax, rightmax;
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    int prefix[n], suffix[n];

    prefix[0] = height[0];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = max(prefix[i - 1], height[i]);
    }

    suffix[n - 1] = height[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = max(suffix[i + 1], height[i]);
    }

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        leftmax = prefix[i];
        rightmax = suffix[i];

        if (height[i] < leftmax && height[i] < rightmax)
        {
            total = total + min(leftmax, rightmax) - height[i];
        }
    }

    printf("Trapped water = %d units", total);

    return 0;
}