#include <stdio.h>

int main()
{
    printf("Enter three numbers:\n");

    int num1;
    int num2;
    int num3;

    printf("\nNumber 1: ");
    scanf("%d",&num1);

    printf("\nNumber 2: ");
    scanf("%d",&num2);

    printf("\nNumber 3: ");
    scanf("%d",&num3);

    if(num1 > num2 && num3)
    {
         printf("\nThe largest number is:%d",num1);
    else if(num2 > num1 && num3)
    {
        printf("\nThe largest number is:%d",num2);
    }
    else
    {
        printf("The largest number is:%d",num3);
    }
    }

    return 0;
}
