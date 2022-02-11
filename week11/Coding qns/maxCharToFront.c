#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
    char str[80], *p;

    printf("Enter a string: \n");
    fgets(str, 80, stdin);
    if (p = strchr(str, '\n'))
        *p = '\0';
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    /* Write your code here */
    int i, j, k;
    char min = 'A';
    int max = 0;
    char temp;
    j = strlen(str);

    for (i = 0; i < j; i++)
    {
        if (*(str + i) > min)
        {
            min = *(str + i);
            max = i;
        }
    }
    printf("%c", str[max]);
    for (k = max; k < j; k++)
    {
        str[k] = str[k + 1];
    }
}
