#include <stdio.h>

void main()
{
    int arr[100];
    int n, k;
    int i, j;
    int count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of K: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }

    printf("Number of pairs = %d", count);

}