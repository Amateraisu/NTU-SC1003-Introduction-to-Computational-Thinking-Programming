#include <stdio.h>
#define PI 3.1416
#include <math.h>
int main()
{
    /* Write your code here */
    float radius;
    float height;
    float volume;
    float surface_area;
    int user_input = 0;
    int count;
    printf("Enter the number of times:\n");
    scanf("%d", &user_input);

    for (count = 0; count < user_input; count++)
    {
        printf("Enter the radius:\n");
        scanf("%f", &radius);
        printf("Enter the height:\n");
        scanf("%f", &height);
        surface_area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;
        volume = PI * pow(radius, 2) * height;
        printf("The volume is %.2f\n", volume);
        printf("The surface area is: %.2f\n", surface_area);
    }
    return 0;
}