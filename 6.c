#include <stdio.h>

void main()
{
    int mark1, mark2, mark3;
    int total;
    float average;

    // Input marks for three subjects
    printf("Enter marks for Subject 1: ");
    scanf("%d", &mark1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &mark2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &mark3);

    // Calculate total and average
    total = mark1 + mark2 + mark3;
    average = total / 3.0;

    // Display total and average
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    // Check for fail in any subject
    if (mark1 < 35 || mark2 < 35 || mark3 < 35) {
        printf("Result: Fail (Less than 35 in at least one subject)\n");
    } else {
        // Grade based on average
        if (average >= 70) {
            printf("Grade: Distinction\n");
        } else if (average >= 60) {
            printf("Grade: First Class\n");
        } else if (average >= 50) {
            printf("Grade: Second Class\n");
        } else if (average >= 35) {
            printf("Grade: Third Class\n");
        } else {
            printf("Result: Fail\n");
        }
    }
}
