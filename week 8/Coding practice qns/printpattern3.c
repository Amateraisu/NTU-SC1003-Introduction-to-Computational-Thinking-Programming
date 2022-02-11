#include <stdio.h>

int main()
{
    int height;
    int count, count2;
    int number;

    printf("Enter the height: \n");
    scanf("%d", &height);
    for (count = 1; count <= height; count++)
    {
        number = count;
        for (count2 = 1; count2 <= count; count2++)
        {
            printf("%d", number++);
            if (number > 9)
            {
                number = 0;
            }
        }
        printf("\n");
    }
    return 0;
}