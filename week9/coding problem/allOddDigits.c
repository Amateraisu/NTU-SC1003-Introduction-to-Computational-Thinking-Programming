#include <stdio.h>
int allOddDigits1(int num);
void allOddDigits2(int num, int *result);
int main()
{
    int number, p = 999, result = 999;
    printf("Enter a number: \n");
    scanf("%d", &number);
    p = allOddDigits1(number);
    if (p == 1)
        printf("allOddDigits1(): yes\n");
    else
        printf("allOddDigits1(): no\n");
    allOddDigits2(number, &result);
    if (result == 1)
        printf("allOddDigits2(): yes\n");
    else
        printf("allOddDigits2(): no\n");
    return 0;
}
int allOddDigits1(int num)
{
    /* Write your code here */
    int remainder;
    int number = num;
    int no_of_even = 0;
    int result;

    while (number > 0)
    {
        remainder = number % 10;
        if (remainder % 2 == 0)
        {
            no_of_even++;
        }
        number = number / 10;

        if (no_of_even > 0)
        {
            result = 0;
        }
        else
        {
            result = 1;
        }
    }
    return result;
}
void allOddDigits2(int num, int *result)
{
    /* Write your code here */
    int remainder;
    int number = num;
    int no_of_even = 0;
    int result1;

    while (number > 0)
    {
        remainder = number % 10;
        if (remainder % 2 == 0)
        {
            no_of_even++;
        }
        number = number / 10;

        if (no_of_even > 0)
        {
            *result = 0;
        }
        else
        {
            *result = 1;
        }
    }
}