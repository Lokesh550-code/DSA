// Given a binary array nums, return the maximum number of consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, count = 0, finalCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));

    printf("Enter the elements of the binary arrays: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }

        if (nums[i] == 0)
        {
            if (count > finalCount)
            {
                finalCount = count;
            }
            count = 0;
        }
    }

    printf("%d", finalCount);

    free(nums);
    nums = NULL;

    return 0;
}