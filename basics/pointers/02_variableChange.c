#include <stdio.h>

int main()
{

    int a = 20;
    int *p = &a;

    printf("%d\n", a);

    *p = 50;

    printf("%d\n", a);

    return 0;
}