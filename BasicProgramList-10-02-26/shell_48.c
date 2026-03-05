#include <stdio.h>

void main()
{
    int a[100], n;
    int i, j, gap, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(gap = n/2; gap > 0; gap = gap/2)
    {
        for(i = gap; i < n; i++)
        {
            temp = a[i];
            j = i;

            while(j >= gap && a[j-gap] > temp)
            {
                a[j] = a[j-gap];
                j = j - gap;
            }

            a[j] = temp;
        }
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}