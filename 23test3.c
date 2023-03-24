#include <stdio.h>

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, highest_salary_index = 0;
    float highest_salary = 0;

    printf("Enter Limit: ");
    scanf("%d", &n);

    struct employee emp[n];

    // Reading employee details
    printf("Enter details for %d employees:\n", n);
    for(i = 0; i < n; i++) {
        printf("Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Name           : ");
        scanf("%s", emp[i].ename);
        printf("Salary         : ");
        scanf("%f", &emp[i].salary);

        if(emp[i].salary > highest_salary) {
            highest_salary = emp[i].salary;
            highest_salary_index = i;
        }
    }

    // Displaying details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee Number: %d\n", emp[highest_salary_index].eno);
    printf("Name           : %s\n", emp[highest_salary_index].ename);
    printf("Salary         : %.2f\n", emp[highest_salary_index].salary);

    return 0;
}
//output
#include <stdio.h>

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i, highest_salary_index = 0;
    float highest_salary = 0;

    printf("Enter Limit: ");
    scanf("%d", &n);

    struct employee emp[n];

    // Reading employee details
    printf("Enter details for %d employees:\n", n);
    for(i = 0; i < n; i++) {
        printf("Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Name           : ");
        scanf("%s", emp[i].ename);
        printf("Salary         : ");
        scanf("%f", &emp[i].salary);

        if(emp[i].salary > highest_salary) {
            highest_salary = emp[i].salary;
            highest_salary_index = i;
        }
    }

    // Displaying details of employee with highest salary
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee Number: %d\n", emp[highest_salary_index].eno);
    printf("Name           : %s\n", emp[highest_salary_index].ename);
    printf("Salary         : %.2f\n", emp[highest_salary_index].salary);

    return 0;
}
