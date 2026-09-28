// Given an integer array nums, rotate the array to the left by one.
// Note : There is no need to return anything, just modify the given array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    temp = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            nums[i] = temp;
            break;
        }

        nums[i] = nums[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    free(nums);
    nums = NULL;

    return 0;
}