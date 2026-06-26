#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;

    printf("Enter string: ");
    gets(str);

    while(str[length] != '\0')
        length++;

    printf("Reverse string = ");

    for(int i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}