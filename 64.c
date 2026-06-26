#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[(int)str[i]]++;

    printf("Character frequency:\n");
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
            printf("%c = %d\n", i, freq[i]);
    }

    return 0;
}