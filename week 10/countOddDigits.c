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
}
void countOddDigits2(int number, int *count)
{
    /* Write your code here */
}