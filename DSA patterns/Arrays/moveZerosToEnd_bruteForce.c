// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.
// This must be done in place, without making a copy of the array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0, index;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
    }

    for (int i = 1; i <= count; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[j] == 0)
            {
                index = j;

                for (int k = index; k < n; k++)
                {
                    if (k == (n - 1))
                    {
                        nums[k] = 0;
                        break;
                    }
                    nums[k] = nums[k + 1];
                }
                break;
            }
            else
            {
                continue;
            }
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