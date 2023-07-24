#include <stdio.h>

int main()

{
    int num;

    printf("Program to check whether a number is even or odd.\n");
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("The number entered is even.\n");
    } else
    {
        printf("The number entered is odd.\n");
    }
    return 0;
}
