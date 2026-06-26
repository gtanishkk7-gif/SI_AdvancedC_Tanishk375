#include <stdio.h>

int main()
{
    char text[200];
    int key;

    printf("Enter text: ");
    gets(text);

    printf("Enter key: ");
    scanf("%d", &key);

    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] >= 'A' && text[i] <= 'Z')
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';

        else if(text[i] >= 'a' && text[i] <= 'z')
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
    }

    printf("Encrypted Text = %s", text);

    return 0;
}