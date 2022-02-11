#include <stdio.h>
typedef struct
{
    char name[20];
    int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
    Person man[3], middle;

    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    /* Write your code here */
    int i, j;
    j = 3;
    for (i = 0; i < j; i++)
    {
        printf("Enter person %d:\n", i + 1);
        scanf("%s %d", p[i].name, &p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
    /* Write your code here */
    int middle;
    int j, i;
    int max, min;

    max = min = p->age;

    for (i = 0; i < j; i++)
    {
        if ((p[i].age) > max)
        {
            max = p[i].age;
        }
        else if ((p[i].age) < min)
        {
            min = p[i].age;
        }
    }

    for (i = 0; i < j; i++)
    {
        if (p[i].age != max && p[i].age != min)
        {
            return p[i];
        }
    }
}