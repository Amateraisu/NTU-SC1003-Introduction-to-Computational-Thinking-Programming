#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2;
    int y1, y2;
    int count, user_input;
    float x_diff, y_diff;
    double distance;

    printf("Enter the number of times: \n");
    scanf("%d", &user_input);
    for (count = 0; count < user_input; count++)
    {
        printf("Enter first point x1 y1:\n");
        scanf("%d%d", &x1, &y1);
        printf("Enter second point x2 y2:\n");
        scanf("%d%d", &x2, &y2);
        x_diff = x1 - x2;
        y_diff = y1 - y2;
        x_diff = pow(x_diff, 2);
        y_diff = pow(y_diff, 2);

        distance = sqrt(x_diff + y_diff);
        printf("The distance is %.2lf\n", distance);
    }
    return 0;
}