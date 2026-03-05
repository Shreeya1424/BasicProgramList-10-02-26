#include <stdio.h>
#include <string.h>

void main()
{
    char s[100];
    int i, pos = -1, n;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    for(i = 0; i < n; i++)
    {
        if(s[i] == 'c')
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Invalid string (no c found)");
        return 0;
    }

    int left = pos - 1;
    int right = pos + 1;
    int valid = 1;

    while(left >= 0 && right < n)
    {
        if(s[left] != s[right])
        {
            valid = 0;
            break;
        }

        left--;
        right++;
    }

    if(valid && left == -1 && right == n)
        printf("String follows pattern wcwR");
    else
        printf("String does NOT follow pattern");

}