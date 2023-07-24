#include <stdio.h>

int main()
{
    int age;

    printf("What is your age?: ");
    scanf("%d", &age);

    if (age < 13)
    {
        printf("You are a child.\n");
    }
    else if (age < 18)
    {
        printf("You are a teenager.\n");
    }
    else
    {
        printf("You are an adult.\n");
    }

    if (age == 47)
    {
        printf("You are Dipti Jain!\n");
    }
    else if (age == 48)
    {
        printf("You are Navneet Jain!\n");
    }
    else if (age == 15)
    {
        printf("You are Parnika/Tia Jain!\n");
    }
    else if (age == 10)
    {
        printf("You are Ansh Jain!\n");
    }

    return 0;
}


