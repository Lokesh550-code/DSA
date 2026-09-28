#include <stdio.h>

int main () {
    int a = 12;
    int *p = &a;

    printf("%d", a);
    printf("\n%p", p);
    printf("\n%d", *p);

    return 0;
}