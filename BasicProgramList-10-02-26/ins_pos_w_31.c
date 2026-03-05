#include <stdio.h>

void main()
{
    int arr[100], n, i, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for(i = n-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }

    arr[pos-1] = element;
    n++;   

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}