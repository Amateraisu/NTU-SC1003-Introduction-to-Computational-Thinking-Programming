#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
    extEvenDigits2(number, &result);
    printf("extEvenDigits2(): %d\n", result);
    return 0;
}
int extEvenDigits1(int num)
{
    /* Write your code here */
    int remainder = 0;
    int sum = 0;
    int position = 0;
    int multiplier = 1;
    int number = num;
    int i;
    int f = -1;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (remainder % 2 == 0)
        {
            position++;
            for (i = 1; i < position; i++)
            {
                multiplier *= 10;
            }

            remainder = remainder * multiplier;
            sum += remainder;
            multiplier = 1;
        }
    }
    if (sum == 0)
    {
        return f;
    }
    else
    {
        return sum;
    }
}
void extEvenDigits2(int num, int *result)
{
    /* Write your code here */
    int remainder = 0;
    int sum = 0;
    int position = 0;
    int multiplier = 1;
    int number = num;
    int i;
    int f = -1;

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        if (remainder % 2 == 0)
        {
            position++;
            for (i = 1; i < position; i++)
            {
                multiplier *= 10;
            }

            remainder = remainder * multiplier;
            sum += remainder;
            multiplier = 1;
        }
    }
    if (sum == 0)
    {
        *result = -1;
    }
    else
    {
        *result = sum;
    }
}