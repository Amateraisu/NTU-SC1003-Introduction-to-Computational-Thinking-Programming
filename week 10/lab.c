// #include <stdio.h>
// #define INIT_VALUE 1000
// int findAr1D(int size, int ar[], int target);
// int main()
// {
//     int ar[20];
//     int size, i, target, result = INIT_VALUE;

//     printf("Enter array size: \n");
//     scanf("%d", &size);
//     printf("Enter %d data: \n", size);
//     for (i = 0; i <= size - 1; i++)
//         scanf("%d", &ar[i]);
//     printf("Enter the target number: \n");
//     scanf("%d", &target);
//     result = findAr1D(size, ar, target);
//     if (result == -1)
//         printf("findAr1D(): Not found\n");
//     else
//         printf("findAr1D(): %d", result);
//     return 0;
// }
// int findAr1D(int size, int ar[], int target)
// {
//     /* Write your code here */
//     int counter;
//     for (counter = 0; counter < size; counter++)
//     {
//         if (ar[counter] == target)
//         {

//             return counter;
//         }
//     }
//     return -1;
// }

#include <stdio.h>
#define SIZE 3
void swap2Rows(int ar[][SIZE], int r1, int r2);
void swap2Cols(int ar[][SIZE], int c1, int c2);
void display(int ar[][SIZE]);
int main()
{
    int array[SIZE][SIZE];
    int row1, row2, col1, col2;
    int i, j;
    int choice;

    printf("Select one of the following options: \n");
    printf("1: getInput()\n");
    printf("2: swap2Rows()\n");
    printf("3: swap2Cols()\n");
    printf("4: display()\n");
    printf("5: exit()\n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the matrix (3x3): \n");
            for (i = 0; i < SIZE; i++)
                for (j = 0; j < SIZE; j++)
                    scanf("%d", &array[i][j]);
            break;
        case 2:
            printf("Enter two rows for swapping: \n");
            scanf("%d %d", &row1, &row2);
            swap2Rows(array, row1, row2);
            printf("The new array is: \n");
            display(array);
            break;
        case 3:
            printf("Enter two columns for swapping: \n");
            scanf("%d %d", &col1, &col2);
            swap2Cols(array, col1, col2);
            printf("The new array is: \n");
            display(array);
            break;
        case 4:
            display(array);
            break;
        }
    } while (choice < 5);
    return 0;
}
void display(int ar[][SIZE])
{
    int l, m;
    for (l = 0; l < SIZE; l++)
    {
        for (m = 0; m < SIZE; m++)
            printf("%d ", ar[l][m]);
        printf("\n");
    }
}
void swap2Rows(int ar[][SIZE], int r1, int r2)
{
    /* Write your code here */
    int h, k;
    int temp;

    for (h = 0; h < 3; h++)
    {
        for (k = 0; k < 3; k++)
        {
            temp = ar[r1][k];
            ar[r1][k] = ar[r2][k];
            ar[r2][k] = temp;
        }
    }
}
void swap2Cols(int ar[][SIZE], int c1, int c2)
{
    /* Write your code here */
    int h, k;
    int temp;

    for (h = 0; h < 3; h++)
    {
        for (k = 0; k < 3; k++)
        {
            temp = ar[k][c1];
            ar[k][c1] = ar[k][c2];
            ar[k][c2] = temp;
        }
    }
}