#include <stdio.h>

#define SIZE 5

int main()
{
    printf("This program allows you to enter 5 integers.\n\n");
    printf("Please enter 5 integers, one at a time:\n\n");

    int array[5];
    printf("Enter integer 1: ");
    scanf("%d",&array);

    printf("Enter integer 2: ");
    scanf("%d",&array);

    printf("Enter integer 3: ");
    scanf("%d",&array);

    printf("Enter integer 4: ");
    scanf("%d",&array);

    printf("Enter integer 5: ");
    scanf("%d",&array);

    printf("Input complete.\n\n");

    printf("The numbers you entered are:\n\n");
    printf("Integer 1: SIZE\n");
    printf("Integer 2: SIZE\n");
    printf("Integer 3: SIZE\n");
    printf("Integer 4: SIZE\n");
    printf("Integer 5: SIZE\n");

    printf("End of program.\n\n");

    return 0;
}
