// program to create array of structure to store the details of 100
// students. Student details are as follows:
// roll number, name, marks of three subject (physics, chemistry and maths),
// calculate the total of marks.
// Display result of all students in tabular form.

#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int marks[3];
    int total;
};

void main()
{
    struct student s[100];
    int i, j, n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter the marks of student %d in physics: ", i + 1);
        scanf("%d", &s[i].marks[0]);
        printf("Enter the marks of student %d in chemistry: ", i + 1);
        scanf("%d", &s[i].marks[1]);
        printf("Enter the marks of student %d in maths: ", i + 1);
        scanf("%d", &s[i].marks[2]);
        s[i].total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
    }
    printf("Roll No.\tName\tPhysics\tChemistry\tMaths\tTotal\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t%d\t%d\t\t%d\t%d\n", s[i].roll, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].total);
    }
}