#include <stdio.h>
#define max_size 100
int main()
{

    int count, count1 = 0, first_integer;
    int line;
    int user_input;
    int index, total = 0;

    printf("Enter number of lines:\n");
    scanf("%d", &user_input);

    for (count = 0; count < user_input; count++)
    {
        total = 0;
        printf("Enter line %d\n", count + 1);
        scanf("%d", &line);
        first_integer = line;
        for (count1 = 0; count1 < first_integer; count1++)
        {
            scanf("%d", &line);
            total += line;
        }
        printf("TOTAL %d\n", total);
    }
    return 0;
}