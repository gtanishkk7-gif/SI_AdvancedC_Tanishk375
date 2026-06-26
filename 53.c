#include <stdio.h>

int main()
{
    int r, c, a[10][10], b[10][10], flag = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] != b[i][j])
                flag = 0;
        }
    }

    if(flag == 1)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");

    return 0;
}