#include <stdio.h>

void main()
{
    int arr[100], n, i, element, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element is not found");
    }
    else
    {
        for(i = pos; i < n-1; i++)
        {
            arr[i] = arr[i+1];
        }

        n--;   

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

}