// Program to print the following pattern
// 12345
// 12345
// 12345
// 12345

#include <stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}