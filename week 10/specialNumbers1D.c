#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
    int a[20], i, size = 0, num;

    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i = 0; i < size; i++)
        printf("%d ", a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    /* Write your code here */
    int counter, numberofperf = 0;
    int ones, tenth, hundred;
    int temp = num;

    for (counter = 100; counter < num; counter++)
    {
        ones = counter % 10;
        counter = counter / 10;
        tenth = counter % 10;
        counter = counter / 10;
        hundred = counter % 10;

        if ((ones * ones * ones + tenth * tenth * tenth + hundred * hundred * hundred) == temp)
        {
            ar[*size] = temp;
            (*size)++;
        }
    }
}