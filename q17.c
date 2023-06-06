// program to sort elements of an array in asscending order

#include <stdio.h>

void main()
{
    int n, i, a[10], x, index;
    void ascend(int a[], int n);

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &a[i]);
    }

    ascend(a, n);
}

void ascend(int a[], int n)
{
    // Print original array
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int temp;
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}