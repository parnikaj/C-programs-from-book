#include <stdio.h>

#define SALESTAX 0.05
#define PRICE 40.50

int main()
{
    int tires;
    printf("Enter the number of tires you require: ");
    scanf("%d",&tires);


    printf("\nThe price for one tire is $%.2f ,along with sales tax it is $%.3f\n",PRICE, PRICE + SALESTAX);

    float totalPrice = PRICE * tires;
    printf("\nThe price for %d tires is $%.2f ,along with sales tax it is $%.3f\n",tires, totalPrice ,totalPrice + SALESTAX);

    return 0;
}
