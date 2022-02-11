#include <stdio.h>
#include <math.h>
int main()
{
    /* Write your code here */
    float current, resistance, power;
    int user_count, user_input;

    printf("Enter the number of times:\n");
    scanf("%d", &user_input);
    for (user_count = 0; user_count < user_input; user_count++)
    {
        printf("Enter the current:\n");
        scanf("%f", &current);
        printf("Enter the resistance:\n");
        scanf("%f", &resistance);
        current = pow(current, 2);
        power = current * resistance;
        printf("The power loss: %.2f\n", power);
    }
    return 0;
}