#include <stdio.h>

int main()
{
    char str[51];
    int arr[50];
    int i, len = 0;

    printf("Enter a number: ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }
    for(i = 0; i < len; i++)
    {
        arr[i] = str[i] - '0';
    }

    printf("Integer array:\n");

    for(i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

}
