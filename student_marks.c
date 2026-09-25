#include <stdio.h>

int main() {

    char name[50];
    int c, dsa, maths;
    int total;
    float average;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter C marks: ");
    scanf("%d", &c);

    printf("Enter DSA marks: ");
    scanf("%d", &dsa);

    printf("Enter Maths marks: ");
    scanf("%d", &maths);

    total = c + dsa + maths;
    average = total / 3.0;

    printf("\nTotal = %d", total);
    printf("\nAverage = %.2f", average);

    if (average >= 40)
        printf("\nResult = PASS");
    else
        printf("\nResult = FAIL");

    return 0;
}