#include <stdio.h>
#include <math.h>

int main()
{
    float a1, b1;
    float a2, b2;
    float c1, c2;
    float numerator_x, denominator_x, x;
    float numerator_y, denominator_y, y;

    printf("Enter a1,b1,c1,a2,b2,c2:\n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);

    //caluclating x
    //numerator of x
    numerator_x = b2 * c1 - b1 * c2;
    numerator_y = a1 * c2 - a2 * c1;
    //denominator of x
    denominator_x = a1 * b2 - a2 * b1;
    denominator_y = a1 * b2 - a2 * b1;

    if (denominator_x != 0)
    {
        x = numerator_x / denominator_x;
        y = numerator_y / denominator_y;
        printf("x=%.2f,y=%.2f", x, y);
    }
    else
    {
        printf("Denominator is zero!\n");
    }

    return 0;
}