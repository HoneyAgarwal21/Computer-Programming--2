#include <stdio.h>

void main()
 {
    float a, discount = 0, c;
s
    printf("Enter Gross Sales: ");
    scanf("%f", &a);

    if (a> 20000) {
        discount = a * 0.15; 
    } else if (a > 10000) {
        discount = a * 0.10;  
    } else {
        discount =a * 0.05; 
    }

    c = a- discount;

    printf("Discount: %.2f\n", discount);
    printf("Net Sales: %.2f\n", c);

}
