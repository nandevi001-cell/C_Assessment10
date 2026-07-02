#include<stdio.h>

int main()
{
    int num, i = 0, j;
    char str[100], temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num > 0)
    {
        str[i] = (num % 10) + 48;
        num = num / 10;
        i++;
    }

    str[i] = '\0';

    for(j = 0; j < i/2; j++)
    {
        temp = str[j];
        str[j] = str[i-j-1];
        str[i-j-1] = temp;
    }

    printf("Each digit:\n");

    for(j = 0; j < i; j++)
    {
        printf("%c\n", str[j]);
    }

}
