#include <stdio.h>

void main()
{
    int n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)   
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even numbers = %d", sum);

}