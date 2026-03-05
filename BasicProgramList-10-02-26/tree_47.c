#include <stdio.h>

int tree[100];
int n = 0;

void insert(int value)
{
    int i = 1;

    while(tree[i] != 0)
    {
        if(value < tree[i])
            i = 2 * i;       // left child
        else
            i = 2 * i + 1;   // right child
    }

    tree[i] = value;
}

void inorder(int i)
{
    if(tree[i] != 0)
    {
        inorder(2 * i);
        printf("%d ", tree[i]);
        inorder(2 * i + 1);
    }
}

void main()
{
    int a[50], i;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        insert(a[i]);
    }

    printf("Sorted array:\n");
    inorder(1);

}