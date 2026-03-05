#include <stdio.h>

int digitSum(int num)
{
    int sum = 0;

    while(num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

void main()
{
    int arr[100];
    int n, i, j;
    int maxSum = -1;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(digitSum(arr[i]) == digitSum(arr[j]))
            {
                if(arr[i] + arr[j] > maxSum)
                {
                    maxSum = arr[i] + arr[j];
                }
            }
        }
    }

    printf("Maximum pair sum = %d", maxSum);

}