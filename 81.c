#include <stdio.h>

int main()
{
    int n, a[100], key, first = -1, last = -1;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            if(first == -1)
                first = i;
            last = i;
        }
    }

    printf("First Position = %d\n", first);
    printf("Last Position = %d", last);

    return 0;
}