#include <stdio.h>

int main()
{
    int age;
    printf("\nEnter your age: ");
    int valid_input = scanf("%d",&age);

    if (valid_input == 0)
    {
        printf("\nInvalid age entered.");
    }

    else if(age >= 18 && age <= 60)
    {
        printf("\nYou are eligible for the standard ticket.");
    }
    else if(age < 18 )
    {
        printf("\nYou are eligible for the child ticket.");
    }
    else
    {
        printf("\nYou are eligible for the senior citizen ticket.");
    }
    return 0;
}
