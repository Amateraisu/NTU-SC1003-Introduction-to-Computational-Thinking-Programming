#include <stdio.h>
#define SIZE 10
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2);
int main()
{
    int ar[SIZE][SIZE] = {0}, rowSize, colSize;
    int i, j, sum1 = 0, sum2 = 0;
    int total;

    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i = 0; i < rowSize; i++)
        for (j = 0; j < colSize; j++)
            scanf("%d", &ar[i][j]);
    diagonals2D(ar, rowSize, colSize, &sum1, &sum2);
    printf("sum1=%d; sum2=%d\n", sum1, sum2);
}
void diagonals2D(int ar[][SIZE], int rowSize, int colSize, int *sum1, int *sum2)
{
    /* Write your code here */
    int i, j;
    int leftsum = 0;
    int rightsum = 0;
    int counter = colSize;
    for (i = 0; i < rowSize; i++)
    {
        leftsum += ar[i][i];
        rightsum += ar[i][counter - 1];
        counter--;
    }
    *sum1 = leftsum;
    *sum2 = rightsum;
}