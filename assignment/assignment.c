#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 5
typedef struct
{
    /* data */
    int nameCardID;
    char personName[20];
    char companyName[20];
} NameCard;

void listNameCards(NameCard *ptr, int size);
void addNameCard(NameCard *ptr, int size);
void removeNameCard(NameCard *ptr, int size);
void getNameCard(NameCard *ptr, int size);
void compare(NameCard *ptr, int size);

int main()
{
    int i, j;
    int choice;
    int size = 0;
    int temp;
    int boolean = 1;
    NameCard tempholder;
    char dummychar[80];

    NameCard cardholder[MAX] = {0};

    printf("NTU NAME CARD HOLDER MANAGEMENT PROGRAM:\n");
    printf("1: listNameCards()\n");
    printf("2: addNameCard()\n");
    printf("3: removeNameCard()\n");
    printf("4: getNameCard()\n");
    printf("5: quit\n ");

    while (boolean)
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            // function 1
            listNameCards(cardholder, size);
            break;
        case 2:
            // function 2
            // if (size<=MAX)
            // {
            //     printf("Enter nameCardID:\n");
            //     scanf("%d", &tempholder.nameCardID);

            //     fgets
            // }
            printf("This is z%d\n", size);
            size++;
            addNameCard(cardholder, size);
            compare(cardholder, size);
            break;

        case 3:
            // function 3
            removeNameCard(cardholder, size);
            size--;
            break;
        case 4:
            // function 4
            getNameCard(cardholder, size);
            break;
        default:
            boolean = 0;
            break;
        }
    }

    return 0;
}

void listNameCards(NameCard *ptr, int size)
{
    int i, j;

    if (size == 0)
    {
        printf("The name card holder is empty\n");
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            printf("nameCardID: %d\n", (ptr + i)->nameCardID);
            printf("personName: %s\n", (ptr + i)->personName);
            printf("companyName: %s\n", (ptr + i)->companyName);
        }
    }
}
void addNameCard(NameCard *ptr, int size)
{
    // NEED TO CHECK IF ID HAS BEEN REPEATED NEED TO SORT IT OUT IN THIS FUNCTION
    int i, j;
    int ID;
    int counter = 0;
    char dummychar[20];
    char *p;

    printf("addNameCard():\n");
    printf("Enter nameCardID:\n");
    scanf("%d", &ID);
    scanf("%c", &dummychar);
    for (i = 0; i < size; i++)
    {
        if (((ptr + i)->nameCardID) != ID)
        {
            counter++;
        }
    }
    if (counter == size)
    {
        (ptr + size - 1)->nameCardID = ID;
        printf("Enter personName:\n");

        fgets(((ptr + size - 1)->personName), sizeof((ptr + size - 1)->personName), stdin);
        if (p = strchr((ptr + size - 1)->personName, '\n'))
            *p = '\0'; // replace ‘\n’ character in name
        printf("Enter companyName:\n");
        fgets((ptr + size - 1)->companyName, sizeof((ptr + size - 1)->companyName), stdin);
        if (p = strchr((ptr + size - 1)->companyName, '\n'))
            *p = '\0'; // replace ‘\n’ character in name
        printf("The name card has been added successfully\n");
    }

    else if (size >= MAX)
    {
        printf("Enter personName:\n");
        fgets(dummychar, sizeof(dummychar), stdin);
        if (p = strchr(dummychar, '\n'))
            *p = '\0';

        printf("Enter companyName:\n");
        fgets(dummychar, sizeof(dummychar), stdin);
        if (p = strchr(dummychar, '\n'))
            *p = '\0';
    }
    else
    {
        printf("Enter personName:\n");
        fgets(dummychar, sizeof(dummychar), stdin);
        if (p = strchr(dummychar, '\n'))
            *p = '\0'; // replace ‘\n’ character in name
        printf("Enter companyName:\n");
        fgets(dummychar, sizeof(dummychar), stdin);
        if (p = strchr(dummychar, '\n'))
            *p = '\0'; // replace ‘\n’ character in name
        printf("The nameCardID has already existed.\n");
    }
}
void removeNameCard(NameCard *ptr, int size)
{
    // using a fking pointer because array is useless and cannot be modified
    int i = 0, j = 0;
    char s[20];
    int counter = 0;
    char dummychar;
    int result = 0;

    printf("removeNameCard():\n");
    printf("Enter personName:\n");
    scanf("%c", &dummychar);
    fgets(s, sizeof(s), stdin);

    for (i = 0; i < size; i++)
    {
        result = strcmp((ptr + i)->personName, s);
        if (result == 0)
        {
            counter++;
            j = i;
        }
    }

    if (counter)
    {
        {
            for (i = j; i < size - 1; i++)
            {
                (ptr + i)->nameCardID = (ptr + i + 1)->nameCardID;
                strcpy(ptr[i].personName, ptr[i + 1].personName);
                strcpy(ptr[i].companyName, ptr[i + 1].companyName);
            }
            printf("The name card is removed\n");
        }
    }
    else
    {
        printf("The target person is not in the name card holder\n");
    }
}

void getNameCard(NameCard *ptr, int size)
{
    // CHECK IF AN ID EXISTS
    int i, j;
    int result;
    char s[20], *p;
    char dummychar;

    printf("getNameCard():\n");
    printf("Enter personName\n");
    scanf("%c", &dummychar);
    fgets(s, sizeof(s), stdin);
    if (p = strchr(s, '\n'))
    {
        *p = '\0';
    }
    for (i = 0; i < size; i++)
    {
        result = strcmp(s, ptr[i].personName);
        if (result == 0)
        {
            printf("The target person name is found\n");
            printf("nameCardID: %d\n", ptr[i].nameCardID);
            printf("personName: %s\n", ptr[i].personName);
            printf("companyName: %s\n", ptr[i].companyName);
            break;
        }
    }
    printf("The target person name is not in the name card holder\n");
}

// comparing function

void compare(NameCard *ptr, int size)
{
    int i, j;
    NameCard temp;
    int min;

    for (i = 0; i < size - 1; i++)
    {
        min = (ptr + i)->nameCardID;
        for (j = 0; j < size - i - 1; j++)
        {
            if ((ptr + j)->nameCardID > (ptr + j + 1)->nameCardID)
            {
                temp.nameCardID = (ptr + j)->nameCardID;
                (ptr + j)->nameCardID = (ptr + j + 1)->nameCardID;
                (ptr + j + 1)->nameCardID = temp.nameCardID;
                // swap person name
                strcpy(temp.personName, ptr[j].personName);
                strcpy(ptr[j].personName, ptr[j + 1].personName);
                strcpy(ptr[j + 1].personName, temp.personName);
                // swap company name
                strcpy(temp.companyName, ptr[j].companyName);
                strcpy(ptr[j].companyName, ptr[j + 1].companyName);
                strcpy(ptr[j + 1].companyName, temp.companyName);
            }
        }
    }
}