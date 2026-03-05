#include <stdio.h>

void main()
{
    int oct, dec = 0, base = 1, rem;
    char hex[20];
    int i = 0;

    printf("Enter an octal number: ");
    scanf("%d", &oct);

    while(oct > 0)
    {
        rem = oct % 10;
        dec += rem * base;
        base *= 8;
        oct /= 10;
    }

    while(dec > 0)
    {
        rem = dec % 16;

        if(rem < 10)
            hex[i] = rem + 48;      
        else
            hex[i] = rem + 55;      

        i++;
        dec /= 16;
    }

    printf("Hexadecimal = ");
    for(int j=i-1; j>=0; j--)
        printf("%c", hex[j]);

}