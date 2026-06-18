#include <stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 1, 2, 1, 1, 3};
    int max_length = 1;
    for (int i = 0; i < 8; i++)
    {
        int length = 1;
        for (int j = i + 1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                length++;
            }
        }
        if (length > max_length)
        {
            max_length = length;
        }
    }
    printf("Maximum length of repeated elements is: %d\n", max_length);
    printf("Repeated element is: %d\n", arr[0]);

}