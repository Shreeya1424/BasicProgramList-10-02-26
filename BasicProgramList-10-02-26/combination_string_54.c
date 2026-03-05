// Input: s = "001101" 
// Output: 6 
// Explana on: 
// The following sets of indices selected are valid:
//  - [0,2,4] from "001101" forms "010" 
//  - [0,3,4] from "001101" forms "010" 
//  - [1,2,4] from "001101" forms "010" 
//  - [1,3,4] from "001101" forms "010" 
//  - [2,4,5] from "001101" forms "101" 
//  - [3,4,5] from "001101" forms "101" 
//  No other selection is valid. 
#include <stdio.h>
#include <string.h>

void main()
{
    char s[100];
    int n, i, j;
    int count = 0;

    printf("Enter binary string: ");
    scanf("%s", s);

    n = strlen(s);

    for(j = 1; j < n-1; j++)
    {
        int left0 = 0, left1 = 0;
        int right0 = 0, right1 = 0;

        // count left side
        for(i = 0; i < j; i++)
        {
            if(s[i] == '0')
                left0++;
            else
                left1++;
        }

        // count right side
        for(i = j+1; i < n; i++)
        {
            if(s[i] == '0')
                right0++;
            else
                right1++;
        }

        if(s[j] == '0')
            count += left1 * right1;   // pattern 101
        else
            count += left0 * right0;   // pattern 010
    }

    printf("Number of valid ways = %d", count);

}