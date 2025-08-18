#include <stdio.h>

void main()
 {
    int a, b, c;
    int largest, smallest;

    // Input three numbers
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assume first number is both largest and smallest
    largest = smallest = a;

    // Compare with second number
    if (b > largest) {
        largest = b;
    }
    if (b < smallest) {
        smallest = b;
    }

    // Compare with third number
    if (c > largest) {
        largest = c;
    }
    if (c < smallest) {
        smallest = c;
    }

    // Output the results
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

}

