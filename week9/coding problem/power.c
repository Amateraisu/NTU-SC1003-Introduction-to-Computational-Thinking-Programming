#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);

int main()
{
    int power;
    float number, result = -1;

    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number, power, &result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
    /* Write your code here */
    int power;
    float result = 1.0;

    if (p > 0)
    {
        while (p > 0)
        {
            p--;
            result *= num;
        }
    }
    else if (p < 0)
    {
        while (p < 0)
        {
            p++;
            result *= (1 / (num));
        }
    }
    else
    {
        result = 1;
    }
    return result;
}
void power2(float num, int p, float *result)
{
    /* Write your code here */
    int power;
    float result1 = 1.0;

    if (p > 0)
    {
        while (p > 0)
        {
            p--;
            result1 *= num;
        }
    }
    else if (p < 0)
    {
        while (p < 0)
        {
            p++;
            result1 *= (1 / (num));
        }
    }
    else
    {
        result1 = 1;
    }
    *result = result1;
}