#include <stdio.h>

void main()
{
    int a[100], b[100], c[200];
    int n, i, j, k=0;
    float median;

    printf("Enter size of arrays: ");
    scanf("%d",&n);

    printf("Enter elements of first sorted array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter elements of second sorted array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);

    i = 0;
    j = 0;

    while(i<n && j<n)
    {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i<n)
        c[k++] = a[i++];

    while(j<n)
        c[k++] = b[j++];

    median = (c[n-1] + c[n]) / 2.0;

    printf("Median = %.0f", median);

}