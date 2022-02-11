#include <stdio.h>
#include <math.h>

float absoluteSum1D(int size, float vector[]);
int main()
{
    float vector[10];
    int i, size;

    printf("Enter vector size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i = 0; i < size; i++)
        scanf("%f", &vector[i]);
    printf("absoluteSum1D(): %.2f", absoluteSum1D(size, vector));
    return 0;
}
float absoluteSum1D(int size, float vector[])
{
    /* Write your code here */
    int counter;
    float sum;

    for (counter = 0; counter < size; counter++)
    {
        if (vector[counter] < 0)
        {
            vector[counter] = -(vector[counter]);
        }
        sum += vector[counter];
    }

    return sum;
}