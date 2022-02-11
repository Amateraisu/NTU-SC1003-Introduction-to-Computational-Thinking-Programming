#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct circle
{
    double radius;
    double x;
    double y;
} circle;

int intersect(circle c1, circle c2);
int contain(circle *c1, circle *c2);

int main()
{
    circle c1;
    circle c2;
    int result, choice;
    int result2;

    printf("Please enter the radius of circle c1:\n");
    scanf("%lf", &(c1.radius));

    printf("Please enter the center of c1, x1 y1:\n");
    scanf("%lf %lf", &(c1.x), &(c1.y));

    printf("Please enter the radius of circle c2:\n");
    scanf("%lf", &(c2.radius));

    printf("Please enter the center of c2, x2 y2:\n");
    scanf("%lf %lf", &(c2.x), &(c2.y));

    result = intersect(c1, c2);
    switch (result)
    {
    case 1:
        printf("1, They intersect\n");
        break;
    case 0:
        printf("0, They do not intersect\n");
        break;
    }

    result2 = contain(&c1, &c2);

    switch (result2)
    {
    case 1:
        printf("1, They contain\n");
        break;
    case 0:
        printf("0, They do not contain\n");
        break;
    }

    return 0;
}

int intersect(circle c1, circle c2)
{
    int i, j;
    double distance;
    double sum;

    printf("This is c1 %lf %lf %lf \n", c1.radius, c1.x, c1.y);
    printf("This is c2 %lf %lf %lf \n", c2.radius, c2.x, c2.y);
    distance = sqrt((c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y));
    printf("This is distance %lf\n", distance);

    sum = c1.radius + c2.radius;
    printf("This is sum %lf\n", sum);
    if (distance <= sum)
    {
        return 1;
    }

    return 0;
}

int contain(struct circle *c1, struct circle *c2)
{
    double distance;
    double sum;

    distance = sqrt((c1->x - c2->x) * (c1->x - c2->x) + (c1->y - c2->y) * (c1->y - c2->y));
    sum = distance + c2->radius;
    if (c1->radius >= sum)
    {
        return 1;
    }

    return 0;
}