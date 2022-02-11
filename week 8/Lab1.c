// #include <stdio.h>
// int main()
// {
//     /* Write your code here */
//     int studentNumber, mark;
//     printf("Please enter the student number: ");
//     scanf("%d", &studentNumber);
//     while (studentNumber != -1)
//     {
//         printf("Enter Student mark : \n");
//         scanf("%d", &mark);
//         if (mark >= 75)
//         {
//             printf("The grade of the student is A\n");
//         }
//         else if (mark > 64)
//         {
//             printf("The grade of the student is B\n");
//         }
//         else if (mark > 54)
//         {
//             printf("The grade of the student is C\n");
//         }
//         else if (mark > 45)
//         {
//             printf("The grade of the student is D\n");
//         }
//         else
//         {
//             printf("The grade of the student is F\n");
//         }
//         printf("Enter Student number:");
//         scanf("%d", &studentNumber);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int no_of_lines, total, count, input;
//     int i;
//     double average;
//     printf("Enter the number of lines: \n");
//     scanf("%d", &no_of_lines);
//     for (i = 0; i < no_of_lines; i++)
//     {
//         total = 0;
//         count = 0;
//         printf("Enter line %d: \n", i + 1);
//         scanf("%d", &input);
//         while (input != -1)
//         {
//             total += input;
//             count++;
//             scanf("%d", &input);
//         }
//         average = (double)total / (double)count;
//         printf("Average= %.2f\n", average);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int total, count, lines, input;
//     double average;
//     int i;
//     printf("\nEnter number of lines: \n");
//     scanf("%d", &lines);
//     for (i = 0; i < lines; i++)
//     {
//         total = 0;
//         count = 0;
//         printf("Enter line %d: \n", i + 1);
//         scanf("%d", &input);
//         while (input != -1)
//         {
//             total += input;
//             count++;
//             scanf("%d", &input);
//         }
//         average = (double)total / (double)count;
//         printf("Average = %.2f\n", average);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int height = 0, row, column;
//     int num = 0;
//     printf("Please enter the height of the triangular pattern: \n");
//     if ((height > 10) || (height < 1))
//     {
//         scanf("%d", &height);
//         while ((height > 10) || (height < 1))
//         {
//             printf("That is not a valid range! \n");
//             scanf("%d", &height);
//         }
//     }
//     for (row = 0; row < height; row++)
//     {
//         for (column = 0; column < (row + 1); column++)
//         {
//             printf("%d", num + 1);
//         }
//         num = (num + 1) % 3;
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float output = 1.0;
//     double x;
//     int denominator = 1, loop;

//     printf("Enter x\n");
//     scanf("%f", &x);
//     for (loop = 1; loop <= 10; loop++)
//     {

//         denominator *= loop;
//         output += (x / (denominator));
//         x *= x;
//     }
//     printf("%.2f", output);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float output = 1.0, numerator = 1.0;
//     double x;
//     int denominator = 1, loop;

//     printf("Enter x\n");
//     scanf("%f", &x);
//     for (loop = 1; loop <= 10; loop++)
//     {
//         numerator *= x;
//         denominator *= loop;
//         output += numerator / denominator;
//     }
//     printf("%.2f\n", output);
//     return 0;
// }
#include <stdio.h>

int main()
{
    double output = 1.0;
    double x;
    int denominator = 1, loop;

    printf("Enter x\n");
    scanf("%lf", &x);
    for (loop = 1; loop <= 10; loop++)
    {

        denominator *= loop;
        output += (x / (denominator));
        x *= x;
    }
    printf("%.2lf", output);
    return 0;
}
