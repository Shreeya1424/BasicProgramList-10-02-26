#include <stdio.h>

void main()
{
    int bin;
    int dec = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &bin);

    while(bin > 0)
    {
        rem = bin % 10;        
        dec = dec + rem * base;
        base = base * 2;       
        bin = bin / 10;       
    }

    printf("Decimal = %d", dec);
}