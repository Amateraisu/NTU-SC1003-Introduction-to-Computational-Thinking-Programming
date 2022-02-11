#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
    int number, result = 0;

    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("Calling perfectProd1() \n");
    printf("perfectProd1(): %d\n", perfectProd1(number));

    printf("Calling perfectProd2() \n");
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    /* Write your code here */
    int factors;
    int sum = 0;
    int perfect_no = 1;
    int all_numbers;

    // filter through all numbers

    for (all_numbers = 1; all_numbers < num; ++all_numbers)
    {
        // for each number, check if it is a perfect number
        for (factors = 1; factors < all_numbers; ++factors)
        {
            if (all_numbers % factors == 0)
            {
                sum += factors;
            }
        }
        // checking for perfect number
        if (sum == all_numbers)
        {
            perfect_no *= all_numbers;
            printf("Perfect number %d\n", sum);
        }
        // reassigning the sum back to 0 for the next number in all_numbers
        sum = 0;
    }

    return perfect_no;
}
void perfectProd2(int num, int *prod)
{
    /* Write your code here */
    int factors;
    int sum = 0;
    int perfect_no = 1;
    int all_numbers;

    // filter through all numbers

    for (all_numbers = 1; all_numbers < num; ++all_numbers)
    {
        // for each number, check if it is a perfect number
        for (factors = 1; factors < all_numbers; ++factors)
        {
            if (all_numbers % factors == 0)
            {
                sum += factors;
            }
        }
        // checking for perfect number
        if (sum == all_numbers)
        {
            perfect_no *= all_numbers;
            printf("Perfect number %d\n", sum);
        }
        // reassigning the sum back to 0 for the next number in all_numbers
        sum = 0;
    }

    *prod = perfect_no;
}