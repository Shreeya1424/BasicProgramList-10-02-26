#include <stdio.h>

int isInArray(int a[], int m)
{
    static int i = 0;   

    if(a[i] == '\0')    
        return 0;

    if(a[i] == m)       
        return 1;

    i++;                
    return isInArray(a, m);
}

void main()
{
    int a[100], n, i, m;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);

    a[n] = 0;  

    printf("Enter number to search: ");
    scanf("%d",&m);

    if(isInArray(a,m))
        printf("Element found\n");
    else
        printf("Element not found\n");

}