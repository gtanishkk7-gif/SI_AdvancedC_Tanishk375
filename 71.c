#include <stdio.h>

void reverseSentence()
{
    char ch;

    scanf("%c", &ch);

    if(ch != '\n')
    {
        reverseSentence();
        printf("%c", ch);
    }
}

int main()
{
    printf("Enter sentence: ");
    reverseSentence();

    return 0;
}