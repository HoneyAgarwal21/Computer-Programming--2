#include <stdio.h>

void main()
{
    float gross_salary, allowance = 0, deduction = 0, net_salary;

    // Input gross salary
    printf("Enter Gross Salary: ");
    scanf("%f", &gross_salary);

    // Determine allowances and deductions based on conditions
    if (gross_salary > 10000) {
        allowance = gross_salary * 0.10;   // 10%
        deduction = gross_salary * 0.03;   // 3%
    } else if (gross_salary > 5000) {
        allowance = gross_salary * 0.07;   // 7%
        deduction = gross_salary * 0.02;   // 2%
    }

    // Calculate net salary
    net_salary = gross_salary + allowance - deduction;

    // Output results
    printf("Allowance: %.2f\n", allowance);
    printf("Deduction: %.2f\n", deduction);
    printf("Net Salary: %.2f\n", net_salary);

}
