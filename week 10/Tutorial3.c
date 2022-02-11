#include <stdio.h>
#include <stdlib.h>
#define MAXNUMBERS 10
int main()
{
    int random_number;
    char array[MAXNUMBERS][MAXNUMBERS];
    int i, j;
    int n, counter;

    // generate the empty array
    for (i = 0; i < MAXNUMBERS; ++i)
    {
        for (j = 0; j < MAXNUMBERS; ++j)
        {
            array[i][j] = '\0';
        }
    }
    printf("Please enter N:\n");
    scanf("%d", &n);

    for (counter = 0; counter < n; counter++)
    {
        random_number = rand() % 100 + 0;
        frequencydistribution(array, MAXNUMBERS, random_number);
    }

    return 0;
}

void frequencydistribution(char array[][MAXNUMBERS], int size, int randnum)
{

    array[][randnum - 1] = '*';
}
