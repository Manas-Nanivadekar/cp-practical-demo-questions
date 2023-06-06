// Program to display transpose of a matrix
#include <stdio.h>

void main()
{
    int m, n, i, j, a[10][10], b[10][10];
    printf("Enter the order of the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("Enter a value: ");
            scanf("%d", &a[i][j]);
        }
    }
    // Displaying the matrix
    printf("The matrix is: \n");
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    // Transposing the matrix
    for (i = 0; i <= m - 1; i++)
    {
        for (j = 0; j <= n - 1; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    // Displaying the transposed matrix
    printf("The transposed matrix is: \n");
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 0; j <= m - 1; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}