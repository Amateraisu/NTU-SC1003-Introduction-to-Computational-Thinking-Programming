#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50], *p;
    int totVowels, totDigits;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    /* Write your code here */

    int i, j, k, z;
    *totVowels = 0;
    *totDigits = 0;
    i = strlen(str);

    for (j = 0; j < i; j++)
    {
        if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' ||
            str[j] == 'o' || str[j] == 'u' || str[j] == 'A' ||
            str[j] == 'E' || str[j] == 'I' || str[j] == 'O' ||
            str[j] == 'U')
        {
            *totVowels += 1;
        }
        else if (str[j] >= '0' && str[j] <= '9')
        {
            *totDigits += 1;
        }
    }
}