// Find missing number
// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.

// Hint: use the formula for sum of n natural number then subtract the sum of the array elements to findn the missing number;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, finalSum, missingNum;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *nums = malloc(n * sizeof(int));
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
    }

    finalSum = (n * (n + 1)) / 2;

    missingNum = finalSum - sum;

    printf("Output: %d", missingNum);

    free(nums);
    nums = NULL;

    return 0;
}