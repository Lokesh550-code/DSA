// Given an array of integers nums, return the value of the largest element in the array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int largestElem, n;

    printf("Enter the no of elements of array: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));

    if (nums == NULL)
    {
        return 1;
    }

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    largestElem = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largestElem)
        {
            largestElem = nums[i];
        }
    }

    printf("The largest element is: %d", largestElem);

    free(nums);
    nums = NULL;

    return 0;
}