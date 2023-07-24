#include <stdio.h>

int main()
{
    printf("A program to check whether a character is a consonant or vowel.\n");
    printf("Enter a character: ");
    char c;
    scanf("%c",&c);

    char consonant[] = {'B','b','C','c','D','d','F','f','G','g','H','h','J','j','K','k','L','l','M','m','N','n','P','p','Q','q','R','r','S','s','T','t','V','v','W','w','X','x','Y','y','Z','z'};
    char vowel[] = {'A','a','E','e','I','i','O','o','U','u'};

    if(c == consonant)
    {
        printf("The character you entered is a consonant.\n");
    } else
    {
        printf("The character you entered is a vowel.\n");
    }


    return 0;
}
