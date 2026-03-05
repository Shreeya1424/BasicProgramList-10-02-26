#include <stdio.h>

int getMax(int a[], int n)
{
    int max = a[0], i;

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

void radixSort(int a[], int n)
{
    int bucket[10][100];
    int count[10];
    int i, j, k, remainder, divisor = 1;
    int max = getMax(a, n);

    while(max / divisor > 0)
    {
        for(i = 0; i < 10; i++)
            count[i] = 0;

        for(i = 0; i < n; i++)
        {
            remainder = (a[i] / divisor) % 10;
            bucket[remainder][count[remainder]] = a[i];
            count[remainder]++;
        }

        i = 0;

        for(k = 0; k < 10; k++)
        {
            for(j = 0; j < count[k]; j++)
            {
                a[i] = bucket[k][j];
                i++;
            }
        }

        divisor = divisor * 10;
    }
}

void main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    radixSort(a, n);

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}