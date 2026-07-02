#include <stdio.h>

int main()
{
    char str[51];
    int i, valid = 1;

    printf("Enter a number: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] < '0' || str[i] > '9')
        {
            valid = 0;
            break;
        }
    }

    if(valid == 1)
        printf("Valid Number");
    else
        printf("Invalid Number");
}
