// Program to display addition of two matrix
#include <stdio.h>

void main()
{
    int m, n, i, j, a[10][10], b[10][10], c[10][10];
    printf("Enter the order of the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the first matrix: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &b[i][j]);
        }
    }
    // Displaying the first matrix
    printf("The first matrix is: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // Displaying the second matrix
    printf("The second matrix is: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    // Adding the two matrices
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // Displaying the sum matrix
    printf("The sum matrix is: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}