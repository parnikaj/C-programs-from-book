#include <stdio.h>
#include<string.h>

int main()
{
    printf("A program that pairs 3 kids with their favourite super hero.\n");

    //first kid
    char kid1 []= "Amelia";
    char hero1 [] = "Captain America";
    printf("%s's favourite hero is %s!\n",kid1,hero1);

    //second kid
    char kid2 []= "Jonathan";
    char hero2 []= "Spider-Man";
    printf("%s's favourite hero is %s!\n",kid2,hero2);

    //third kid
    char kid3 []= "Lily";
    char hero3 []= "Wolverine";
    printf("%s's favourite hero is %s!\n",kid3,hero3);

    return 0;
}
