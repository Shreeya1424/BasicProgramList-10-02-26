// 1 
// 1 * 1 
// 1 * 3 * 1 
// 1 * 3 * 5 * 3 * 1

#include <stdio.h>

void main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", 2*j - 1);

            if(j < i)
                printf(" * ");
        }

        for(j = i-1; j >= 1; j--)
        {
            printf(" * %d", 2*j - 1);
        }

        printf("\n");
    }

}