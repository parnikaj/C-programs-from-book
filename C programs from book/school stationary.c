#include <stdio.h>
#include <math.h>

int main()
{
    printf("This is a program which lists three kids and their school supply needs, as well as cost to buy the supplies.\n");

    char child1 = 'B';
    float child1sum;
    char child2 = 'J';
    float child2sum;
    char child3 = 'T';
    float child3sum;

    float marker = 2.09;
    float pen = 3.56;
    float colourpencil = 2.78;



    printf("The first child with initial %c, needs 5 markers, 4 pens and 12 colour pencils.\n", child1);
    child1sum = (5 * marker) + (4 * pen) + (12 * colourpencil); // calculates the total of all stationary for child 1
    printf("In total, child %c will have to pay %f for their stationary.\n",child1, child1sum);

    printf("The second child with initial %c, needs 7 markers, 3 pens and 10 colour pencils.\n", child2);
    child2sum = (7 * marker) + (3 * pen) + (10 * colourpencil); // calculates the total of all stationary for child 2
    printf("In total, child %c will have to pay %f for their stationary.\n", child2, child2sum);

    printf("The third child with initial %c, needs 9 markers, 6 pens and 14 colour pencils.\n", child3);
    child3sum = (9 * marker) + (6 * pen) + (14 * colourpencil);
    printf("In total, child %c will have to pay %f for their stationary.\n", child3, child3sum);

    float total = (child1sum) + (child2sum) + (child3sum);
    printf("The total for all 3 children is %f\n", total);

    return 0;
}
