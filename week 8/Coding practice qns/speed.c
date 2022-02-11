#include <stdio.h>
int main()
{
    float time;
    float distance;
    float speed;
    int user_input;
    int count;

    printf("Enter the number of times:\n");
    scanf("%d", &user_input);

    for (count = 0; count < user_input; count++)
    {
        printf("Enter distance (in km): \n");
        scanf("%f", &distance);
        printf("Enter time (in sec): \n");
        scanf("%f", &time);
        speed = distance / time;
        printf("The speed is %0.2f km/sec\n", speed);
    }
    return 0;
}
