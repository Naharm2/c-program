#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
    {
        printf("The character is an uppercase letter.");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("The character is a lowercase letter.");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("The character is a digit.");
    }
    else
    {
        printf("The character is not a letter.");
    }
}