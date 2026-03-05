#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("String is Palindrome");
    else
        printf("String is NOT Palindrome");

}