// Program to calculate the grade of the student according to the specified
// marks.(ex. If marks >=60 and marks<75 Grade=First class)

#include <stdio.h>

void main()
{
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);
    if (marks >= 60 && marks < 75)
    {
        printf("Grade = First class\n");
    }
    else if (marks >= 75 && marks < 90)
    {
        printf("Grade = Distinction\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Grade = Excellent\n");
    }
    else
    {
        printf("Grade = Fail\n");
    }
}