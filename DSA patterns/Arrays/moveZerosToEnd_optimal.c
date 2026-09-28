// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.
// This must be done in place, without making a copy of the array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int k = 0; k < n; k++)
    {
        if (nums[k] == 0)
        {
            j = k;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
            j++;
        }
    }

    printf("Output: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    free(nums);
    nums = NULL;

    return 0;
}