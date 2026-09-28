#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    free(arr);
    arr = NULL;

    return 0;
}