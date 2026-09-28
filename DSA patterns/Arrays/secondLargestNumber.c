// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, largest, secondLargest = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));

    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    largest = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (largest < nums[i])
        {
            secondLargest = largest;
            largest = nums[i];
        }
    }

    printf("The second largest element is: %d", secondLargest);

    free(nums);
    nums = NULL;

    return 0;
}