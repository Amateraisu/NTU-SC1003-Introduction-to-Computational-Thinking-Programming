#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    /* Write your code here */
    int i = 0, max = 0;
    int counter = 0;
    int number = 0;

    number = strlen(s);
    for (i = 0; i < number; i++)
    {
        if (*(s + i) != '\040' && *(s + i) != '\056')
        {
            counter++;
        }
        else if (*(s + i) == '\040')
        {
            if (max < counter)
            {
                max = counter;
            }
            counter = 0;
        }
    }

    if (max < counter)
    {
        max = counter;
    }

    return max;
}