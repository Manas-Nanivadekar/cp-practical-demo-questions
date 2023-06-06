// program to calculate the value of series x=1+1/2!+1/3!+...+1/n! by
// using for loop

#include <stdio.h>

void main()
{
    int i, n;
    float x = 1, fact = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        x = x + (1 / fact);
    }
    printf("The value of the series is: %f", x);
}