#include <stdio.h>
#include <string.h>
int countWords(char *s);
int main()
{
    char str[80], *p;
    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    /* Write your code here */
    int i, j;

    int counter = 1;

    j = strlen(s);

    for (i = 0; i < j; i++)
    {
        if (s[i] == '\040')
        {
            counter++;
        }
    }

    return counter;
}