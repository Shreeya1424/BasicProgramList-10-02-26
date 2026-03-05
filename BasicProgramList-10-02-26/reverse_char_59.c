// Input: a!!!b.c.d,e'f,ghi 
// Output: i!!!h.g.f,e'd,cba 
// Input:   str = “Ab,c,de!$” 
// Output:  str = “ed,c,bA!$” 

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char str[100];
    int i, j;
    char temp;

    printf("Enter string: ");
    scanf("%s", str);

    int n = strlen(str);

    i = 0;
    j = n - 1;

    while(i < j)
    {
        if(!isalpha(str[i]))
        {
            i++;
        }
        else if(!isalpha(str[j]))
        {
            j--;
        }
        else
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;

            i++;
            j--;
        }
    }

    printf("Reversed string: %s", str);

}