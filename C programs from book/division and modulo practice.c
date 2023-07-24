#include <stdio.h>

int main()
{
    int numerator;
    printf("Enter the numerator: ");
    scanf("%d",&numerator);

    int denominator;
    printf("Enter the denominator: ");
    scanf("%d",&denominator);

    while(denominator == 0)
    {
        printf("The denominator cannot be zero, as the answer is undefined!\n");
        printf("Please enter a new denominator: ");
        scanf("%d",&denominator);
    }

    int integerResult = numerator/denominator;
    printf("Integer Division: %d\n",integerResult);

    float floatResult = (float)numerator/denominator;
    printf("Floating-Point Division: %f\n",floatResult);

    int modResult = numerator % denominator;
    printf("Modulo Operation: %d\n",modResult);


    return 0;
}
