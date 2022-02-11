#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50], i, size;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", ar + i);
    printf("swapMinMax1D222():\n ");
    for (i = 0; i < size; i++)
        printf("%d ", *(ar + i));
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", ar[i]);
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    /* Write your code here */
    int smallest_number = 10, largest_number = 0;
    int smallest_index, largest_index;
    int j;
    int temp;

    for (j = 0; j < size; j++)
    {
        if (ar[j] >= largest_number)
        {
            largest_number = ar[j];
            largest_index = j;
        }

        if (ar[j] <= smallest_number)
        {
            smallest_number = ar[j];
            smallest_index = j;
        }
    }

    temp = ar[smallest_index];
    ar[smallest_index] = ar[largest_index];
    ar[largest_index] = temp;
}
