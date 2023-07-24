#include <stdio.h>
#include <math.h>

int main()
{
    int base;
    int power;
    double result;

    printf("Program that calculates the power of a number.\n");
    printf("Enter a base: ");
    scanf("%d",&base);
    printf("Enter a power: ");
    scanf("%d",&power);

    result = pow(base,power);
    printf("%d to the power of %d is %.2lf",base,power,result);
    return 0;
}
