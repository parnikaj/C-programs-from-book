#include <stdio.h>

#define CURRENTYEAR 2023

int main()
{
    int birthYear;
    printf("Enter your birth year: ");
    scanf("%d",&birthYear);

    if (birthYear > CURRENTYEAR)
    {
        printf("\nA future year has been entered, you could not have been born!");
        printf("\nTry again: ");
        scanf("%d",&birthYear);
    }

    int currentAge = CURRENTYEAR - birthYear;
    printf("\nIn the current year, which is %d, you will be %d years old.",CURRENTYEAR,currentAge);

    if (birthYear % 400 == 0)
    {
        printf("\nYou were born in a leap year!");

    }
    if (birthYear % 4 == 0)
    {
        printf("\nYou were born in a leap year!");
    }
    return 0;
}
