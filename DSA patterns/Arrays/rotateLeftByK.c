// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the number of turns by which to rotate the array: ");
    scanf("%d", &k);

    int *nums = malloc(n * sizeof(int));

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < k; i++)
    {
        temp = nums[0];
        for (int j = 0; j < n; j++)
        {
            if (j == (n - 1))
            {
                nums[j] = temp;
                break;
            }
            nums[j] = nums[j + 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    free(nums);
    nums = NULL;

    return 0;
}