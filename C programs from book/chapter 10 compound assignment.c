#include <stdio.h>
#define SALESTAX 0.08

int main()
{
    int quantity1,quantity2,quantity3;
    float price1,price2,price3;

    printf("Enter the quantity and price of each item:\n");

    //item 1
    printf("Item 1:\n");
    printf("Quantity: ");
    scanf("%d",&quantity1);
    printf("Price: ");
    scanf("%.2f",&price1);

    //item 2
    printf("Item 2:\n");
    printf("Quantity: ");
    scanf("%d",&quantity2);
    printf("Price: ");
    scanf("%.2f",&price2);

    //item 3
    printf("Item 3:\n");
    printf("Quantity: ");
    scanf("%d",&quantity3);
    printf("Price: ");
    scanf("%.2f",&price3);

    //subtotal
    float subtotal = (quantity1 + quantity2 + quantity3) * (price1 + price2 + price3);
    printf("Subtotal:%d\n",subtotal);

    //sales tax
    float salestax = subtotal * 0.08;
    printf("Sales Tax:%d\n\.2f",salestax);

    //total
    float total = subtotal + salestax;
    printf("Total:%.2f
           ",total);

    return 0;
}
