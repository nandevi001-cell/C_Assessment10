#include<stdio.h>
int main()
{
    char str[100];
    int i, num = 0;
	printf("Enter a number: ");
    scanf("%s", str);
	for(i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - 48);
    }
    printf("Integer value = %d", num);
}

