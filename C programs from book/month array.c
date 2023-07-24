#include <stdio.h>
#include <string.h>

int main()
{
    char month [25]= "January";
    printf("%s\n",month);

    /*month = "April"; NOT ALLOWED*/
    month[0]= 'A';
    month[1]= 'p';
    month[2]= 'r';
    month[3]= 'i';
    month[4]= 'l';
    month[5]= '\0';

    strcpy(month,"April"); //puts new string in month array

    printf("%s\n",month);
    return 0;
}
