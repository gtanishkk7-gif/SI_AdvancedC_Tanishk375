#include <stdio.h>

int main()
{
    int n, a[10][10], flag = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
                flag = 0;
        }
    }

    if(flag == 1)
        printf("Symmetric Matrix");
    else
        printf("Not Symmetric Matrix");

    return 0;
}