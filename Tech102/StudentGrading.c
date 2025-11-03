#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    // Taking input for 5 subjects
    printf("Enter marks for 5 subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);

    // Calculating total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    // Displaying percentage
    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    // Calculating grade based on percentage
    if (percentage >= 75)
        printf("\nGrade: A");
    else if (percentage >= 55 && percentage < 75)
        printf("\nGrade: B");
    else if (percentage >= 30 && percentage < 55)
        printf("\nGrade: C");
    else
        printf("\nGrade: Fail");

    return 0;
}
