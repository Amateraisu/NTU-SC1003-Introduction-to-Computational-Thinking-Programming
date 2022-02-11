// #include <stdio.h>
// #include <string.h>
// #define M1 "How are ya, sweetie?"
// char M2[40] = "Beat the clock.";
// char *M3 = "chat";
// int main()
// {
//     char words[80], *p;
//     printf(M1);
//     puts(M1);
//     puts(M2);
//     puts(M2 + 1);
//     fgets(words, 80, stdin); /* user inputs : win a toy. */
//     if (p = strchr(words, '\n'))
// p = '\0';
//     puts(words);
//     scanf("%s", words + 6); /* user inputs : snoopy. */
//     puts(words);
//     words[3] = '\0';
//     puts(words);
//     while (*M3)
//         puts(M3++);
//     puts(--M3);
//     puts(--M3);
//     M3 = M1;
//     puts(M3);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #define max 100

// int main()
// {
//     char array1[max], *p;
//     char array2[max];
//     int n, i = 0;

//     printf("Enter the string:\n");
//     fgets(array1, sizeof array1, stdin);

//     printf("Enter the number of characters:\n");
//     scanf("%d", &n);
//     strncpy(array2, array1, n);

//     printf("stringncpy(): %s", array2);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{
    char array1[MAX];
    char array2[MAX];
    int i, j;

    printf("Enter a source string:\n");
    scanf("%s", array1);
    printf("Enter a target string:\n");
    scanf("%s", array2);

    i = strcmp(array1, array2);

    if (i == 0)
    {
        printf("stringcmp():equal");
    }
    else if (i > 0)
    {
        printf("stringcmp():greater than ");
    }
    else if (i < 0)
    {
        printf("stringcmp():lesser than ");
    }
    return 0;
}