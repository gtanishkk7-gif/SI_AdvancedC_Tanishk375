#include <stdio.h>
int main()
{
    int n, LM, RM;
    printf("Enter a no :");
    scanf("%d", &n);
    if (n == 0)
    {
        RM = LM = 0;
        printf("0");
    }
    else
    {
        RM = n % 10;
        printf("Rightmost element is :%d\n", RM);
        for (int temp = n; temp > 0; temp /= 10)
        {
            LM = temp % 10;
        }
        printf("Leftmost element is :%d", LM);
    }
    
    return 0;
}