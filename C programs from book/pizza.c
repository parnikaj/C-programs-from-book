#include <stdio.h>

int main()
{
    char restaurant[50];
    printf("Which restaurant do you like eating pizza at?: ");
    scanf("%s",restaurant);

    float cost;
    printf("How much does one pizza slice from %s cost?: ",restaurant);
    scanf("%f",&cost);

    char topping[30];
    printf("What is your favourite one word pizza topping?: ");
    scanf("%s",topping);

    int once;
    printf("How many slices of %s pizza can you eat in one sitting?: ",topping);
    scanf("%d",&once);

    char date[20];
    printf("What is today's date? (Enter in DD/MM/YY): ");
    scanf("%s",date);

    printf("Why not treat yourself to dinner on %s!.\n",date);

    int slices;
    printf("How many slices of pizza would you like to eat: ");
    scanf("%d",&slices);

    float pizzaCost = cost * slices;
    printf("%d slices of pizza will cost you %.2f",slices,pizzaCost);

    return 0;
}
