// Input: 2a3bc4dE5F2G7H 
// Output: aabbbcddddEFFFFFGGHHHHHHH

#include <stdio.h>
#include <ctype.h>

void main()
{
    char s[100];
    int i, j, num = 0;

    printf("Enter encoded string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]))
        {
            num = s[i] - '0';   // convert char digit to integer
        }
        else
        {
            for(j = 0; j < num; j++)
            {
                printf("%c", s[i]);
            }
        }
    }

}