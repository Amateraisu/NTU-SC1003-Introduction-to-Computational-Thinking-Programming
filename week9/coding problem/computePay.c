#include <stdio.h>
double computePay1(int noOfHours, int payRate);
void computePay2(int noOfHours, int payRate, double *grossPay);

int main()
{
    int noOfHours, payRate;
    double grossPay;

    printf("Enter number of hours:\n");
    scanf("%d", &noOfHours);
    printf("Enter hourly pay rate:\n");
    scanf("%d", &payRate);
    printf("computePay1(): %.2f\n", computePay1(noOfHours, payRate));
    computePay2(noOfHours, payRate, &grossPay);
    printf("computePay2(): %.2f\n", grossPay);
    return 0;
}

double computePay1(int noOfHours, int payRate)
{
    /* Write your code here */
    double time_pay, over_time_pay, grossPay;
    int over_time_payRate, over_hours;
    if (noOfHours > 160)
    {
        time_pay = payRate * 160;
        over_hours = noOfHours - 160;
        over_time_payRate = payRate * 3.0 / 2.0;
        over_time_pay = over_time_payRate * over_hours;
        grossPay = time_pay + over_time_pay;
        return grossPay;
    }
    else
    {
        grossPay = payRate * noOfHours;
        return grossPay;
    }
}

void computePay2(int noOfHours, int payRate, double *grossPay)
{
    /* Write your code here */
    double time_pay, over_time_pay, grossPay2;
    int over_time_payRate, over_hours;
    *grossPay = 0;
    if (noOfHours > 160)
    {
        time_pay = payRate * 160;
        over_hours = noOfHours - 160;
        over_time_payRate = payRate * 3.0 / 2.0;
        over_time_pay = over_time_payRate * over_hours;
        grossPay2 = time_pay + over_time_pay;
        *grossPay = grossPay2;
    }
    else
    {
        grossPay2 = payRate * noOfHours;
        *grossPay = grossPay2;
    }
}
