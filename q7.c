// program to calculate fibonacci series using recursive function.
#include <stdio.h>

int main()
{
    int n, i;
    int fibonacci(int); // function declaration
    printf("Enter the number of element you want in series :\n");
    scanf("%d", &n);
    printf("fibonacci series is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i)); // function call
    }
}

int fibonacci(int i) // function definition
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}