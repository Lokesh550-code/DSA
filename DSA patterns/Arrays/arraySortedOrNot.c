// Given an array arr of size n, the task is to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order. If the array is sorted then return True, else return False.
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, isSorted = 1;

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

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
        {
            isSorted = 0;
            break;
        }
    }

    if (isSorted == 0)
    {
        printf("The given array is not sorted");
    }
    else
    {
        printf("The given array is sorted");
    }

    free(arr);
    arr = NULL;

    return 0;
}