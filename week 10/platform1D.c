#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
    int i, b[50], size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &b[i]);
    printf("platform1D(): %d\n", platform1D(b, size));
    return 0;
}
int platform1D(int ar[], int size)
{
    /* Write your code here */
    int i, j;
    int numberprev;
    int number;
    int counter = 1, counter2 = 1;
    int max = 0;
    numberprev = ar[0];
    for (i = 1; i <= size; i++)
    {
        number = ar[i];
        if (number == numberprev)
        {
            counter++;
        }
        else
        {
            if (counter > max)
            {
                max = counter;
            }
            counter = 1;
        }
        numberprev = ar[i];
    }

    return max;
}