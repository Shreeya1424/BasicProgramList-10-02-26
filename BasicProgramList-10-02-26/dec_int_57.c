//valid numbers: ["2", "0089", "-0.1", "+3.14", "4.", "-.9", "2e10", "-90E3", "3e+7", "+6e-1", "53.5e93", "-123.456e789"]
//Invalid numbers: ["abc", "1a", "1e", "e3", "99e2.5", "--6", "-+3", "95a54e53"].

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isValidNumber(char s[])
{
    int i;
    int digit = 0, dot = 0, exp = 0;

    for(i = 0; s[i] != '\0'; i++)
    {
        if(isdigit(s[i]))
        {
            digit = 1;
        }
        else if(s[i] == '+' || s[i] == '-')
        {
            if(i != 0 && s[i-1] != 'e' && s[i-1] != 'E')
                return 0;
        }
        else if(s[i] == '.')
        {
            if(dot || exp)
                return 0;
            dot = 1;
        }
        else if(s[i] == 'e' || s[i] == 'E')
        {
            if(exp || !digit)
                return 0;
            exp = 1;
            digit = 0;
        }
        else
        {
            return 0;
        }
    }

    return digit;
}

void main()
{
    char s[100];

    printf("Enter string: ");
    scanf("%s", s);

    if(isValidNumber(s))
        printf("Valid number\n");
    else
        printf("Invalid number\n");

}