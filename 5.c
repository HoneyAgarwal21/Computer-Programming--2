#include <stdio.h>

void main()
 {
    float gross_sales, discount = 0, net_sales;

    // Input gross sales
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);

    // Determine discount based on sales
    if (gross_sales > 20000) {
        discount = gross_sales * 0.15;  // 15%
    } else if (gross_sales > 10000) {
        discount = gross_sales * 0.10;  // 10%
    } else {
        discount = gross_sales * 0.05;  // 5%
    }

    // Calculate net sales
    net_sales = gross_sales - discount;

    // Output results
    printf("Discount: %.2f\n", discount);
    printf("Net Sales: %.2f\n", net_sales);

}
