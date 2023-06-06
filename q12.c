//  program to swap values of two variables using function

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a; // temp = 10
    *a = *b;   // a = 20
    *b = temp; // b = 10
}

void main()
{
    int a = 10, b = 20;
    printf("Before swapping, a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping, a = %d and b = %d\n", a, b);
}
