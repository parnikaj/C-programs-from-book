#include <stdio.h>

#define WIDTH 150
#define LENGTH 300

int main()
{
    printf("This is a program about rectangles.\n");

    //width
    int width;
    printf("Enter a width: ");
    scanf("%d",&width);
    if(WIDTH < width)
    {
        printf("The width entered is out of limits, please enter another width within an appropriate range.\n");
        printf("Enter a new width: ");
        scanf("%d",&width);
    } else
    {
        printf("Width: %d\n",width);
    }
    //length
    int length;
    printf("Enter a length: ");
    scanf("%d",&length);
    if(LENGTH < length)
    {
        printf("The length entered is out of limits, please enter another length within an appropriate range.\n");
        printf("Enter a new length: ");
        scanf("%d",&length);
    } else
    {
        printf("Length: %d\n",length);
    }
    //area
    int area = width * length;
    printf("Area: %d\n",area);

    //perimeter
    int perimeter = (2 * width) + (2 * length);
    printf("Perimeter: %d\n",perimeter);

    return 0;
}
