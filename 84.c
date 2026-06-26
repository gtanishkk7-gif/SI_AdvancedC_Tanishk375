#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], words[50][50];
    int count[50] = {0}, n = 0;

    printf("Enter sentence: ");
    gets(str);

    char *token = strtok(str, " ");

    while(token != NULL)
    {
        int found = -1;

        for(int i = 0; i < n; i++)
        {
            if(strcmp(words[i], token) == 0)
            {
                found = i;
                break;
            }
        }

        if(found == -1)
        {
            strcpy(words[n], token);
            count[n] = 1;
            n++;
        }
        else
        {
            count[found]++;
        }

        token = strtok(NULL, " ");
    }

    printf("Word Frequency:\n");
    for(int i = 0; i < n; i++)
        printf("%s = %d\n", words[i], count[i]);

    return 0;
}