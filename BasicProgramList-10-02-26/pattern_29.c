// * * * * * * * 
//  *         *  
//   *      *   
//      *    
//    *     *   
//  *        *  
// * * * * * * * 

#include <stdio.h>

void main()
{
    int i, j;
    int n = 7;

    for(i = 1; i <= 13; i++)
    {
        for(j = 1; j <= 13; j++)
        {
            if(i == 1 || i == 13)           // first and last row
                printf("* ");
            else if(j == i || j == 14-i)    // diagonal stars
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

}