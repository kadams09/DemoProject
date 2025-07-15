#include <stdio.h>

int main() {
    int emp_id;
    char name[50];
    float basic_salary, da, hra, gross_salary, tax, net_salary;

    // Accept employee details
    printf("Enter Employee ID: ");
    scanf("%d", &emp_id);

    printf("Enter Employee Name: ");
    scanf("\n", name); // To accept full name with spaces

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    printf("Enter DA (Dearness Allowance): ");
    scanf("%f", &da);

    printf("Enter HRA (House Rent Allowance): ");
    scanf("%f", &hra);

    // Calculate Gross Salary
    gross_salary = basic_salary + da + hra;

    // Calculate tax based on salary slab
    if (gross_salary >= 50000) {
        tax = 0.20 * gross_salary;  // 20% tax
    } else if (gross_salary >= 30000) {
        tax = 0.10 * gross_salary;  // 10% tax
    } else {
        tax = 0.0;  // No tax
    }

    // Calculate Net Salary after tax
    net_salary = gross_salary - tax;

    // Display results
    printf("\n--- Employee Salary Details ---\n");
    printf("Employee ID      : %d\n", emp_id);
    printf("Employee Name    : %s\n", name);
    printf("Basic Salary     : %.2f\n", basic_salary);
    printf("DA               : %.2f\n", da);
    printf("HRA              : %.2f\n", hra);
    printf("Gross Salary     : %.2f\n", gross_salary);
    printf("Tax Deducted     : %.2f\n", tax);
    printf("Net Salary       : %.2f\n", net_salary);

    return 0;
}
