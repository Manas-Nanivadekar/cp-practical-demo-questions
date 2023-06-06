// Program to print following pattern.
// 1
// 22
// 333
// 4444
// 55555

#include <stdio.h>

void main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) // i = 1, 2, 3, 4, 5
    {
        for (j = 1; j <= i; j++) // j = 1, 2, 3, 4, 5
        {
            printf("%d", i);
        }
        printf("\n");
    }
}