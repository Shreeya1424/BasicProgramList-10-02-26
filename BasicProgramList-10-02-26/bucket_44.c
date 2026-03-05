#include <stdio.h>

void main()
{
    int a[100], bucket[100] = {0};
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements (0-99):\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        bucket[a[i]]++;     
    }

    printf("Sorted array:\n");

    for(i = 0; i < 100; i++)
    {
        for(j = 0; j < bucket[i]; j++)
        {
            printf("%d ", i);
        }
    }

}