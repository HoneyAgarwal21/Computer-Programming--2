#include <stdio.h>

void main()
 {
    int a, b, c;
    int largest, smallest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = smallest = a;

    if (b > largest) {
        largest = b;
    }
    if (b < smallest) {
        smallest = b;
    }

    if (c > largest) {
        largest = c;
    }
    if (c < smallest) {
        smallest = c;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

}

