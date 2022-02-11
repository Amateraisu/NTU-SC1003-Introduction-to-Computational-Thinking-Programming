#include <stdio.h>

int s(int *p);

int main()

{

    int a = 0, i, *p, sum;

    p = &a;

    for (i = 0; i < 3; i++)

    {

        scanf("%d", p);

        sum = s(p);

        printf("%d ", sum);
    }

    return 0;
}

int s(int *p)

{

    int sum = 10;

    sum = sum + *p;

    return (sum);
}