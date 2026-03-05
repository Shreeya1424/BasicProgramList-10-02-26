// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4

#include <stdio.h>

void main()
{
    int n = 4;
    int i, j;

    for(i = 0; i < 2*n-1; i++)
    {
        for(j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int left = j;
            int bottom = (2*n-2) - i;
            int right = (2*n-2) - j;

            int min = top;

            if(left < min) min = left;
            if(bottom < min) min = bottom;
            if(right < min) min = right;

            printf("%d ", n - min);
        }
        printf("\n");
    }

}