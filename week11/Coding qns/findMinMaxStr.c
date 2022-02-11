#include <stdio.h>
#include <string.h>
#define SIZE 10
void findMinMaxStr(char word[][40], char *first, char *last, int size);

int main()
{
    char word[SIZE][40];
    char first[40], last[40];
    int i, size;

    printf("Enter size: \n");
    scanf("%d", &size);
    printf("Enter %d words: \n", size);
    for (i = 0; i < size; i++)
        scanf("%s", word[i]);
    findMinMaxStr(word, first, last, size);
    printf("First word = %s, Last word = %s\n", first, last);
    return 0;
}

void findMinMaxStr(char word[][40], char *first, char *last, int size)
{
    /* Write your code here */
    int i, j, k;
    int result1, result2;

    strcpy(first, word[0]);
    strcpy(last, word[0]);

    for (i = 0; i < size; i++)
    {
        result1 = strcmp(first, *(word + i));
        result2 = strcmp(last, *(word + i));
        if (result1 == 1)
        {
            strcpy(first, word[i]);
        }

        if (result2 == -1)
        {
            strcpy(last, word[i]);
        }
    }
}
