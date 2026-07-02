#include <stdio.h>

int main()
{
    char str[51];
    int i, len = 0;

    printf("Enter a number: ");
    scanf("%s", str);
    while(str[len] != '\0')
    {
        len++;
    }
    printf("Reversed number = ");
    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
