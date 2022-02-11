#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define maximum_string_size 100
int main()
{
    char c[maximum_string_size];
    int digits = 0;
    int letters = 0;
    int i = 0;

    printf("Please enter a string:\n");
    fgets(c, sizeof c, stdin);
    while (c[i] != '\043')
    {
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
        {
            letters++;
        }
        else if (c[i] >= '0' && c[i] <= '9')
        {
            digits++;
        }
        i++;
    }

    printf("The number of digits are: %d\n", digits);
    printf("The number of letters are: %d\n", letters);
    return 0;
}