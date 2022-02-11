#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main()
{
    int num, digit, result = -1;

    printf("Enter the number: \n");
    scanf("%d", &num);
    printf("Enter k position: \n");
    scanf("%d", &digit);
    printf("digitValue1(): %d\n", digitValue1(num, digit));
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
}
int digitValue1(int num, int k)
{
    /* Write your code here */
    int length_of_num = 0;
    int tem;
    int digit;
    int zero = 0;

    tem = num;
    while (tem > 0)
    {
        length_of_num++;
        tem = tem / 10;
    }
    if (k > length_of_num)
    {
        return zero;
    }
    else
    {
        while (k > 0)
        {
            k--;
            digit = num % 10;
            num = num / 10;
        }
    }
    return digit;
}
void digitValue2(int num, int k, int *result)
{
    /* Write your code here */
    int length_of_num = 0;
    int tem;
    int digit;
    tem = num;
    while (tem > 0)
    {
        length_of_num++;
        tem = tem / 10;
    }
    if (k > length_of_num)
    {
        *result = 0;
    }
    else
    {
        while (k > 0)
        {
            k--;
            digit = num % 10;
            num = num / 10;
        }
        *result = digit;
    }
}