#include <stdio.h>

int main()
{
    printf("This program calculates the average of four grades and compares it to the highest grade in the class.\n");

    int grade1, grade4;
    grade1 = grade4 = 91;
    printf("Out of the 4 tests you did, you scored %d in the first and last test.\n",grade1);

    int grade2 = 88;
    int grade3 = 83;

    printf("On the second test you got %d and on the third test you got %d.\n",grade2,grade3);

    float percent = ((grade1 + grade2 + grade3 + grade4) /400.) * 100;
    printf("All 4 grades as a percentage are %.2f.\n",percent);

    float average = (grade1 + grade2 + grade3 + grade4) /4.0;
    printf("Your average grade is %.2f.\n",average);

    float highest = 98.0 - average;
    printf("Your grade is %.2f lower than the highest grade in class which is 98.\n",highest);

    float percentCompare = (highest/98.0) * 100;
    printf("You are %.2f behind the highest grade in class.\n",percentCompare);

    return 0;
}
