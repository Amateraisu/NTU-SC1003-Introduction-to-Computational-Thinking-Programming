#include <stdio.h>
int countOddDigits1(int num);
void countOddDigits2(int num, int *result);
int main()
{
    int number, result;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("countOddDigits1(): %d\n", countOddDigits1(number));
    countOddDigits2(number, &result);
    printf("countOddDigits2(): %d\n", result);
    return 0;
}
int countOddDigits1(int number)
{
    /* Write your code here */
    int num = number;
    int remainder;
    int no_of_odds = 0;

    while (num > 0)
    {
        remainder = num % 10;
        if (remainder % 2 != 0)
        {
            no_of_odds++;
        }
        num = num / 10;
    }
    return no_of_odds;
}
void countOddDigits2(int number, int *count)
{
    /* Write your code here */
    int num = number;
    int remainder;
    int no_of_odds = 0;

    while (num > 0)
    {
        remainder = num % 10;
        if (remainder % 2 != 0)
        {
            no_of_odds++;
        }
        num = num / 10;
    }
    *count = no_of_odds;
}