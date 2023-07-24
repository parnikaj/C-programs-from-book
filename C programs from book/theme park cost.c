#include <stdio.h>

int main()
{
    //a program which calculates the cost of admission to a theme park based on age and height of a person

    printf("A program which calculates the cost of admission.");

    int age, height;

    printf("\nEnter your age: ");
    scanf("%d",&age);

    printf("\nEnter your height in inches: ");
    scanf("%d",&height);

    if(age < 5 || height < 40)
    {
        printf("\nYou are admitted for free!");
    }
    else if(age >= 5 && age <= 12)
    {
        printf("\nYou have to pay $20 for entry.");
    }
    else if(age >= 13 && height >= 40)
    {
        printf("\nYou have to pay $35 for entry.");
    }
    else
    {
        printf("\nYou do not meet any criteria for admission.");
    }
    return 0;
}
