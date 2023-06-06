// Program  to print following pattern.
// 1
// 12
// 123
// 1234
// 12345

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
            printf("%d", j);
        }
        printf("\n");
    }
}