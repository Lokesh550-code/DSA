// #include <stdio.h>

// int main()
// {

//     int arr[5] = {2, 4, 5, 6, 1};

//     int *p = arr;

//     printf("%d \n", *p);

//     p++;

//     printf("%d \n", *p);

//     p++;

//     printf("%d \n", *p);

//     return 0;
// }

// Exercise

#include <stdio.h>

int main()
{

    int arr[] = {10, 20, 30, 40, 50};

    int *p = arr;

    printf("%d \n", *p);

    p = p + 4;

    printf("%d \n", *p);

    printf("%d \n", *(p - 2));

    return 0;
}