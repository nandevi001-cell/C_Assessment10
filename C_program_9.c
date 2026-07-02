#include<stdio.h>

int main()
{
    char str[51];
    int i = 0;

    printf("Enter a number: ");
    scanf("%s", str);

    while(str[i] == '0')
    {
        i++;
    }

    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
