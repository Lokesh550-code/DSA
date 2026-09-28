// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, target, index = -1;

    printf("Enter the no of elements of array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the numebr to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    printf("The index of target is: %d", index);

    free(arr);
    arr = NULL;

    return 0;
}