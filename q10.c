// program to create array of structure to store the details of 50
// employees. Employee details are as follows:
// EmpId, Ename, Salary, Dept (ADMIN, HR, PRODUCTION).Display all the
// details in tabular format.

#include <stdio.h>

struct employee
{
    int empid;
    char ename[20];
    float salary;
    char dept[20];
};

void main()
{
    struct employee e[50];
    int i, n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the employee id of employee %d: ", i + 1);
        scanf("%d", &e[i].empid);
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", e[i].ename);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
        printf("Enter the department of employee %d: ", i + 1);
        scanf("%s", e[i].dept);
    }
    printf("EmpId\tEname\tSalary\tDept\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%f\t%s\n", e[i].empid, e[i].ename, e[i].salary, e[i].dept);
    }
}
