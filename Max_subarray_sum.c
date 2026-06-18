#include <stdio.h>
int main()
{
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int max_sum = arr[0];
    for (int i = 0; i < 8; i++)
    {
        int sum = 0;
        for (int j = i; j < 8; j++)
        {
            sum = sum + arr[j];
            if (sum > max_sum)
            {
                max_sum = sum;
            }
        }
    }
    printf("Maximum sum of subarray is: %d\n", max_sum);
}