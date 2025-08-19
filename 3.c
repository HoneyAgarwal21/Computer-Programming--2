#include <stdio.h>

void main()
{
    float a, allowance = 0, deduction = 0, b;

    printf("Enter Gross Salary: ");
    scanf("%f", &a);

    if (a > 10000) {
        allowance = a * 0.10;   
        deduction = a * 0.03;  
    } else if (a > 5000) {
        allowance = a * 0.07;   
        deduction = a * 0.02;   
    }

    b = a + allowance - deduction;

    printf("Allowance: %.2f\n", allowance);
    printf("Deduction: %.2f\n", deduction);
    printf("Net Salary: %.2f\n", b);

}
