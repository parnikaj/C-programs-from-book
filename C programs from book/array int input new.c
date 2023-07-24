#include <stdio.h>
#define SIZE 5
int main()
{
    printf("This program allows you to enter 5 integers.\n\n");

    int array[SIZE];

    printf("Please enter 5 integers, one at a time:\n\n");

    printf("Enter integer 1: ");
    scanf("%d",&array[0]);

    printf("Enter integer 2: ");
    scanf("%d",&array[1]);

    printf("Enter integer 3: ");
    scanf("%d",&array[2]);

    printf("Enter integer 4: ");
    scanf("%d",&array[3]);

    printf("Enter integer 5: ");
    scanf("%d",&array[4]);

    printf("\nInput complete.\n\n");

    printf("The numbers you entered are:\n\n");

    printf("Integer 1: %d\n", array[0]);
    printf("Integer 2: %d\n", array[1]);
    printf("Integer 3: %d\n", array[2]);
    printf("Integer 4: %d\n", array[3]);
    printf("Integer 5: %d\n\n", array[4]);

    printf("End of program.\n\n");

    return 0;

}
