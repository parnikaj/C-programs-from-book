#include<stdio.h>

int main()
{
    printf("Program to determine whether a triangle is acute, obtuse or right-angled based on the angle from user input.\n");
    int angle;
    printf("Enter an angle: ");
    scanf("%d",&angle);

    if(angle < 90)
    {
        printf("The triangle is acute.\n");
    } else if (angle > 90)
    {
        printf("The triangle is obtuse.\n");
    } else
    {
        printf("The triangle is right-angled.\n");
    }
    return 0;
}
