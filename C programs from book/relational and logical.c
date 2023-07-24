#include <stdio.h>
int main()
{
    /*program using the logical operators, along with relational operators.*/

    int age;
    int wage;

    printf("\nEnter your age please: ");
    scanf("%d",&age);

    if (age < 18)
    {
        printf("\nSorry you do not meet the legal requirements to earn a wage.");
    }
    else
    {
    printf("\nEnter your salary/wage per year please: ");
    scanf("%d",&wage);
    }

    if((age >= 60 && wage >= 90000))
    {
        printf("\nYour pension is $3000 per month.");
    }
    else if(age >= 60 || wage <= 20000)
    {
        printf("\nYou receive $10000 per month.");
    }
    else if(age < 60 && wage < 500000)
    {
        printf("\nWoah, you are rich!");
    }
    else
    {
        printf("\nSorry,you don't meet the legal age and work requirements, although you could be a kid youtuber or something.");
    }
        return 0;
}
