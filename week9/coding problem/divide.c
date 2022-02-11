#include <stdio.h>
int divide1(int m, int n, int *r);
void divide2(int m, int n, int *q, int *r);

int main()
{
    int m, n, q, r;

    printf("Enter two numbers (m and n): \n");
    scanf("%d %d", &m, &n);
    q = divide1(m, n, &r);
    printf("divide1(): quotient %d remainder %d\n", q, r);
    divide2(m, n, &q, &r);
    printf("divide2(): quotient %d remainder %d\n", q, r);
    return 0;
}
int divide1(int m, int n, int *r)
{
    /* Write your code here */
    int quotient = 0;
    double remainder;
    // if m is greater than n
    if (m > n)
    {
        while (m > n)
        {
            quotient++;
            m -= n;
        }
        remainder = m;
    }
    else
    {
        quotient = 0;
        remainder = m;
    }

    *r = remainder;
    return quotient;
}

void divide2(int m, int n, int *q, int *r)
{

    /*Write your code here */
    int quotient = 0;
    double remainder;
    // if m is greater than n
    if (m > n)
    {
        while (m > n)
        {
            quotient++;
            m -= n;
        }
        remainder = m;
    }
    else
    {
        quotient = 0;
        remainder = m;
    }

    *r = remainder;
    *q = quotient;
}
