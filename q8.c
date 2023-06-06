// Program to check if the entered string is a Palindrome or not

#include <stdio.h>

void main()
{
    int n = 0, i = 0, j = 0, flag = 0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    while (str[n] != '\0')
    {
        n++;
    }
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The string is not a palindrome\n");
    }
    else
    {
        printf("The string is a palindrome\n");
    }
}