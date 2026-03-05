//input is abc 
//output is acb
//there another string possible from this is acb, bac, bca, etc.,
// but smallest is acb 

#include <stdio.h>
#include <string.h>

void main()
{
    char s[100];
    int i, j, len;
    char temp;

    printf("Enter string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i = len - 2; i >= 0; i--)
    {
        if(s[i] < s[i+1])
            break;
    }

    if(i < 0)
    {
        printf("No next lexicographical string");
        return 0;
    }

    for(j = len - 1; j > i; j--)
    {
        if(s[j] > s[i])
            break;
    }

    temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    int start = i + 1;
    int end = len - 1;

    while(start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

    printf("Next lexicographical string: %s", s);

}