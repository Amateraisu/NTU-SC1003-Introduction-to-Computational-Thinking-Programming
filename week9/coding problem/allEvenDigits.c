#include <stdio.h>
int allEvenDigits1(int num);
void allEvenDigits2(int num, int *result);
int main()
{
    int number, p = 999, result = 999;
    printf("Enter a number: \n");
    scanf("%d", &number);
    p = allEvenDigits1(number);
    if (p == 1)
        printf("allEvenDigits1(): yes\n");
    else if (p == 0)
        printf("allEvenDigits1(): no\n");
    else
        printf("allEvenDigits1(): error\n");
    allEvenDigits2(number, &result);
    if (result == 1)
        printf("allEvenDigits2(): yes\n");
    else if (result == 0)
        printf("allEvenDigits2(): no\n");
    else
        printf("allEvenDigits2(): error\n");
    return 0;
}
int allEvenDigits1(int num)
{
    /* Write your code here */
    int remainder;
    int number = num;
    int no_of_odds = 0;
    int result;

    while (number > 0)
    {
        remainder = number % 10;
        if (remainder % 2 != 0)
        {
            no_of_odds++;
        }
        number = number / 10;

        if (no_of_odds > 0)
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
void allEvenDigits2(int num, int *result)
{
    /* Write your code here */
    int remainder;
    int number = num;
    int no_of_odds = 0;
    int result1;

    while (number > 0)
    {
        remainder = number % 10;
        if (remainder % 2 != 0)
        {
            no_of_odds++;
        }
        number = number / 10;

        if (no_of_odds > 0)
        {
            *result = 0;
        }
        else
        {
            *result = 1;
        }
    }
}