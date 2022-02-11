#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];    /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total;     /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
    printf("average(): %.2f\n", average());
    return 0;
}
double average()
{
    /* Write your code here */
    int i = 0, j = 0, k = 0;
    char dummychar;
    struct student list[50];
    double totals = 0;
    char name[20], *p;
    p = name;

    for (i = 0; i < 50; i++)
    {

        printf("Enter student name:\n");
        fgets(name, sizeof(name), stdin);
        if (p = strchr(name, '\n'))
            *p = '\0';

        if (strcmp(name, "END") != 0)
        {
            strcpy(list[i].name, name);
            printf("Enter test score:\n");
            scanf("%lf", &list[i].testScore);
            printf("Enter exam score:\n");
            scanf("%lf", &list[i].examScore);
            list[i].total = (list[i].examScore + list[i].testScore) / 2;
            printf("Student %s total = %.2lf\n", list[i].name, list[i].total);
            k++;
            scanf("%c", &dummychar);
        }
        else
        {
            if (k != 0)
            {
                for (j = 0; j <= i; j++)
                {
                    totals += list[j].total;
                }
                return totals / i;
            }
            else
            {
                return 0;
            }
        }
    }
}