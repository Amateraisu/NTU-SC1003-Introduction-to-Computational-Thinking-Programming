#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct
{
    char name[40];
    char telno[40];
    int id;
    double salary;
} Employee;
void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);
int main()
{
    Employee emp[MAX];
    char name[40], *p;
    int size, choice, result;

    printf("Select one of the following options: \n");
    printf("1: readin() \n");
    printf("2: search() \n");
    printf("3: addEmployee() \n");
    printf("4: print() \n");
    printf("5: exit() \n");
    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            size = readin(emp);
            break;
        case 2:
            printf("Enter search name: \n");
            scanf("\n");
            fgets(name, 40, stdin);
            if (p = strchr(name, '\n'))
                *p = '\0';
            result = search(emp, size, name);
            if (result != 1)
                printf("Name not found! \n");
            break;
        case 3:
            printf("Enter new name: \n");
            scanf("\n");
            fgets(name, 40, stdin);
            if (p = strchr(name, '\n'))
                *p = '\0';
            result = search(emp, size, name);
            if (result != 1)
                size = addEmployee(emp, size, name);
            else
                printf("The new name has already existed in the database\n");
            break;
        case 4:
            printEmp(emp, size);
            break;
        default:
            break;
        }
    } while (choice < 5);
    return 0;
}
void printEmp(Employee *emp, int size)
{
    int i;

    printf("The current employee list: \n");
    if (size == 0)
        printf("Empty array\n");
    else
    {
        for (i = 0; i < size; i++)
         printf("%s %s %d
%.2f\n",emp[i].name,emp[i].telno,emp[i].id,emp[i].salary);
    }
}
int readin(Employee *emp)
{
    int size = 0;
    char *p;

    while (1)
    {
        printf("Enter name: \n");
        scanf("\n");
        fgets(emp->name, 40, stdin);
        if (p = strchr(emp->name, '\n'))
            *p = '\0';
        if (strcmp(emp->name, "#") == 0)
            break;
        printf("Enter tel: \n");
        fgets(emp‐> telno, 40, stdin);
        if (p = strchr(emp->telno, '\n'))
            *p = '\0';
        printf("Enter id: \n");
        scanf("%d", &emp->id);
        printf("Enter salary: \n");
        scanf("%lf", &emp->salary);
        emp++;
        size++;
    }
    return size;
}
int search(Employee *emp, int size, char *target)
{
    int i;
    for (i = 0; i < size; i++, emp++)
    {
        if (strcmp(emp->name, target) == 0)
        {
            printf("Employee found at index location: %d \n", i);
            printf("%s %s %d %.2f \n", target, emp->telno, emp->id, emp->salary);
            return 1;
        }
    }
    if (i == size)
        return 0;
}
int addEmployee(Employee *emp, int size, char *target)
{
    int k;
    if (size < MAX)
    {
        strcpy(emp[size].name, target);
        printf("Enter tel: \n");
        scanf("%s", emp[size].telno);
        printf("Enter id: \n");
        scanf("%d", &emp[size].id);
        printf("Enter salary: \n");
        scanf("%lf", &emp[size].salary);
        printf("Added at position: %d\n", size);
        size++;
    }
    else
    {
        printf("Database is full\n");
    }
    return size;
}