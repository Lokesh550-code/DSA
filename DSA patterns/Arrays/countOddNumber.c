// Given an array of n elements. The task is to return the count of the number of odd numbers in the array.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    printf("Enter the number of elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }

    printf("Number of odd elements: %d", count);

    free(arr);
    arr = NULL;

    return 0;
}