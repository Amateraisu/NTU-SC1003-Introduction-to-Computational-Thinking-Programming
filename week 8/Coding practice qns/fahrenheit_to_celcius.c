#include <stdio.h>

int main()
{
    int user_input = 1;
    float celsius, fahrenheit = 273.0;

    while (user_input != -1)
    {
        printf("Enter the temperature in F\n");
        scanf("%d", &user_input);
        celsius = (5.0 / 9.0) * (user_input - 32.0);
        printf("Converted degree in C:%.2f\n", celsius);
    }
    return 0;
}