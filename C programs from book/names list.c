#include <stdio.h>
#include <string.h>

int main()
{
    printf("A program which stores and displays a set of names entered by the user.\n");

    int numname;
    printf("Please enter the number of names you want to store: \n");
    scanf("%d",&numname);

    char name;
    printf("Please enter each name one by one: \n");
    scanf("%c",&name);

    char name[];
    printf("Here are the names you entered: %s\n",name);
    return 0;
}
