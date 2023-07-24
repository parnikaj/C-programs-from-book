/* This program also increases a counter from 1 to 5, printing updates and then counts it back down to 1. However, it uses compound
operators
#include <stdio.h>
main()
{
 int ctr = 0;
 ctr += 1; // increases counter to 1
 printf("Counter is at %d.\n", ctr);
 ctr += 1; // increases counter to 2
 printf("Counter is at %d.\n", ctr);
 printf("Counter is at %d.\n", ctr += 1);
 ctr += 1; // increases counter to 4
 printf("Counter is at %d.\n", ctr);
 printf("Counter is at %d.\n", ctr += 1);
 ctr -= 1; // decreases counter to 4
 printf("Counter is at %d.\n", ctr);
 printf("Counter is at %d.\n", ctr -= 1);
 printf("Counter is at %d.\n", ctr -= 1);
 printf("Counter is at %d.\n", ctr -= 1);
 return 0;
 }*/

/*#include <stdio.h>

int main()
{
    int total = 5;
    total *= 2 + 3;
    printf("Total:%d",total);

    return 0;
}*/

#include <stdio.h>

int main()
{
    int a, b;
    a = (6<10);
    b = (2>3);
    printf("a:%d",a);
    printf("\nb:%d",b);
    return 0;
}
