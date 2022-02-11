#include <stdio.h>
#define SIZE 10
void readNames(char nameptr[][80], int *size);

int main()
{
    int size;
    int i = 0;
    char nameptr[SIZE][80];

    readNames(nameptr, &size);
    for (i = 0; i < size; i++)
    {
        printf(nameptr[i]);
    }
    return 0;
}

void readNames(char nameptr[][80], int *size)
{
    /* Write your code here */
    int n = 0;
    int i, j;
    printf("Enter size:\n");
    scanf("%d", &n);
    printf("Enter %d names:\n", n);
    *size = n;
    for (i = 0; i < n; i++)
    {
        scanf("%s ", &nameptr[i]);
    }
}