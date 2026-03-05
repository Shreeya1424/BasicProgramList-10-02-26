// *********  
// **** ****  
// ***   ***  
// **     **  
// *       * 

#include <stdio.h>

void main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        if(i == 1)
        {
            for(j = 1; j <= 9; j++)
            {
                printf("*");
            }
        }
        else
        {
            for(j = 1; j <= 6 - i; j++)
            {
                printf("*");
            }

            for(j = 1; j <= 2*i - 3; j++)
            {
                printf(" ");
            }

            for(j = 1; j <= 6 - i; j++)
            {
                printf("*");
            }
        }

        printf("\n");
    }

}