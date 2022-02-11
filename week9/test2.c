#include <stdio.h>

int test1();

int test2();

int main()

{

    int i, m, n;

    for (i = 0; i < 3; i++)

    {

        m = test1();

        n = test2();
    }

    printf("%d,%d\n", m, n);

    return 0;
}

int test1()

{

    int x = 0;

    x++;

    return x;
}

int test2()

{

    static int x = 0;

    x++;

    return x;
}