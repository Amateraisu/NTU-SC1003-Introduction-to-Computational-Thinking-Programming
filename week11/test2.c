#include <stdio.h>

int main()

{

    int s, i;

    for (s = 0, i = 0; i < 3; i++, s += i)
        ;

    printf("%d\n", s);

    return 0;
}