#include <stdio.h>

void swap(int *x, int *y)
{
    int i;

    i = *y;
    *y = *x;
    *x = i;
}

int main()
{

    int a = 30, b = 20;

    printf("Before \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);

    swap(&a, &b);

    printf("After \n");
    printf("a: %d \n", a);
    printf("b: %d \n", b);

    return 0;
}