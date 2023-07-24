#include <stdio.h>

int main()
{
        int num1,num2,num3;
        int average;

        printf("Program to calculate the average of 3 numbers.\n");
        printf("Enter 3 numbers: ");
        scanf("%d%d%d",&num1,&num2,&num3);

        average = (num1 + num2 + num3)/3;
        printf("The average is %d\n",average);
        return 0;
}
