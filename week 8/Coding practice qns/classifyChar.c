#include <stdio.h>

int main()
{

    char c;

    printf("Enter a character: \n");
    c = getchar();
    // testing for integer
    if (c >= '0' && c <= '9')
    {
        printf("Digit");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("Upper case letter");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("Lower case letter");
    }
    else
    {
        printf("Other character");
    }

    return 0;
}