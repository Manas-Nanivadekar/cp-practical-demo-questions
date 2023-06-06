// program to check user entered number is Armstrong number or not.

#include <stdio.h>

void main()
{
    int n, temp, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }
}