// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    j = n - 1;

    int *arr = calloc(n, sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    printf("Enter the values of elements: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == j)
        {
            break;
        }

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}