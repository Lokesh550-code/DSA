// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.
// Return the number of unique elements in the array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, uniqueCount = 1, index, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            index = i;
            temp = nums[i];
            for (int j = index; j < n; j++)
            {
                if (j == (n - 1))
                {
                    nums[j] = temp;
                    break;
                }
                nums[j] = nums[j + 1];
            }
        }
        else
        {
            uniqueCount++;
        }
    }

    int *newNums = realloc(nums, uniqueCount * sizeof(int));

    if (newNums != NULL)
    {
        n = uniqueCount;
        nums = newNums;
    }
    else
    {
        printf("Reallocaton of the array failed \n");
    }

    printf("Output: %d \n", uniqueCount);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    free(nums);
    nums = NULL;

    return 0;
}