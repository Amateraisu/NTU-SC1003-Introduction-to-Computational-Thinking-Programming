#include <stdio.h>
int main()
{
    int hours;
    float gross_pay, net_pay;
    float basic_pay_rate = 6.00, basic_pay;
    float over_time_rate, over_pay, over_time;
    float first_tax, second_tax, third_tax, gross_tax;

    over_time_rate = basic_pay_rate * 1.50;
    printf("Enter hours of work: \n");
    scanf("%d", &hours);

    //Gross pay
    if (hours > 40)
    {
        basic_pay = basic_pay_rate * 40;
        over_time = hours - 40;
        over_pay = over_time * over_time_rate;
        gross_pay = basic_pay + over_pay;
        printf("Gross pay=%f\n", gross_pay);
    }
    else
    {
        basic_pay = basic_pay_rate * hours;
        gross_pay = basic_pay;
        printf("Gross pay=%f\n", gross_pay);
    }
    // first tax
    if (gross_pay <= 1000.0)
    {
        first_tax = gross_pay / 10;
        gross_tax = first_tax;
    }
    else if (gross_pay <= 1500.0)
    {
        first_tax = gross_pay / 10;
        second_tax = (gross_pay - 1000) / 5;
        gross_tax = first_tax + second_tax;
    }
    else
    {
        first_tax = gross_pay / 10;
        second_tax = (gross_pay - 1000) / 5;
        third_tax = ((gross_pay - 1000 - 500) / 10) * 3;
        gross_tax = first_tax + second_tax + third_tax;
    }

    printf("Tax=%.2f\n", gross_tax);
    net_pay = gross_pay - gross_tax;
    printf("Net pay=%.2f\n", net_pay);

    return 0;
}