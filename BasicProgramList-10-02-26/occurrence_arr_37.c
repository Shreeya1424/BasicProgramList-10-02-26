#include <stdio.h>

int checkArray(int a[], int n)
{
    int i, count;

    for(i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1])
            return 0;
    }

    count = 1;

    for(i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
        {
            count++;
            if(count >= 3)
                return 1;
        }
        else
        {
            count = 1;
        }
    }

    return 0;
}

void main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);

    if(checkArray(a,n))
        printf("Return 1\n");
    else
        printf("Return 0\n");

}