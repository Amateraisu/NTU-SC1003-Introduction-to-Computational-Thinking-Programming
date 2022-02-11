#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);

int main()
{
    int id = -1, noOfHours, payRate;
    double grossPay;

    readInput(&id, &noOfHours, &payRate);
    while (id != -1)
    {
        printf("computeSalary1():");
        grossPay = computeSalary1(noOfHours, payRate);
        printf("ID %d grossPay %.2f\n", id, grossPay);
        printf("computeSalary2()");
        computeSalary2(noOfHours, payRate, &grossPay);
        printf("ID %d grossPay %.2f \n", id, grossPay);
        readInput(&id, &noOfHours, &payRate);
    }
    return 0;
}

void readInput(int *id, int *noOfHours, int *payRate)
{
    /* Write your code here */
    int identity = 0;
    int inputHours;
    int input_id;
    int input_payrate;

    printf("Enter ID (-1 to end):\n");
    scanf("%d", &identity);
    *id = identity;
    if (*id != -1)
    {
        printf("Enter number of hours:\n");
        scanf("%d", &inputHours);
        *noOfHours = inputHours;
        printf("Enter hourly pay rate:\n");
        scanf("%d", &input_payrate);
        *payRate = input_payrate;
    }
}
double computeSalary1(int noOfHours, int payRate)
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
void computeSalary2(int noOfHours, int payRate, double *grossPay)
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