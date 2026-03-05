#include <stdio.h>

void main()
{
    int a[100], count[100] = {0};
    int n, i, max = 0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

        if(a[i] > max)
            max = a[i];
    }

    for(i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    printf("Sorted array:\n");

    for(i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            printf("%d ", i);
            count[i]--;
        }
    }

}