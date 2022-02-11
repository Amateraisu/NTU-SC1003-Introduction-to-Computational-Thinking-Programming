#include <stdio.h>

int main()
{
    int user_input;
    int ch;
    int i, counter;

    printf("Enter the height:\n");
    scanf("%d", &user_input);
    for (i = 1; i <= user_input; i++)
    {
        // for starting the line
        if (i % 2 == 0)
        {
            ch = 66;
        }
        else
        {
            ch = 65;
        }
        for (counter = 1; counter <= i; counter++)
        {
            if (ch == 65)
            {
                printf("%c", ch++);
            }
            else
                printf("%c", ch--);
        }
        printf("\n");
    }
}