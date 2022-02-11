#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
    int x, y, result = -1;
    printf("Enter 2 numbers: \n");
    scanf("%d %d", &x, &y);
    printf("gcd1(): %d\n", gcd1(x, y));
    gcd2(x, y, &result);
    printf("gcd2(): %d\n", result);
    return 0;
}
int gcd1(int num1, int num2)
{
    /* Write your code here */
    int i = 1;
    int gcd;

    for (i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
void gcd2(int num1, int num2, int *result)
{
    /* Write your code here */
    int i = 1;
    int gcd;

    for (i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    *result = gcd;
}