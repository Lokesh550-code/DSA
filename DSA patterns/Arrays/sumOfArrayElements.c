// Given an array arr of size n, the task is to find the sum of all the elements in the array.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;

    printf("Enter the number elements: ");
    scanf("%d", &n);

    int *arr = calloc(n, sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of all array elements : %d", sum);

    free(arr);
    arr = NULL;

    return 0;
}