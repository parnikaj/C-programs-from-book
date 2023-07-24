/* This program asks the user their state of happiness on a scale of
1 to 10 and then gives a custom 2-line message based on their range,
either 1-2, 3-4, 5-7, or 8-10. */

#include <stdio.h>

int main()
{
    int scale;
    printf("\nWhat is your current state of happiness on a scale of 1-10?: ");
    scanf("%d",&scale);

    if(scale>=8)
    {
        printf("\nThat is great!");
        printf("\nIt is wonderful that things are going well for you!");
    }
    else if(scale>=5)
    {
        printf("\nThat is fine, not too shabby!");
        printf("\nThings seem to be going pretty okay for you!");
    }
    else if(scale>=3)
    {
        printf("\nThat is okay!");
        printf("\nLooks like you may be going through a bit of a rough time, don't worry though it will get better soon!");
    }
    else
    {
        printf("\nThat doesn't seem very fun!");
        printf("\nAwww it's okay,things will get better soon!\a");
    }
    return 0;
}
