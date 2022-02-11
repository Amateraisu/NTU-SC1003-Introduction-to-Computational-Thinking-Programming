#include <stdio.h>
void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
    int ar[40];
    int i, size;
    int min, max;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &ar[i]);
    findMinMax1D(ar, size, &min, &max);
    printf("min = %d; max = %d\n", min, max);
    return 0;
}
void findMinMax1D(int ar[], int size, int *min, int *max)
{
    /* Write your code here */
    int counter;
    *min = 1000000;
    *max = -1000000;
    for (counter = 0; counter < size; counter++)
    {
        if (*max < ar[counter])
        {
            *max = ar[counter];
        }
        if (*min > ar[counter])
        {
            *min = ar[counter];
        }
    }
}