#include <stdio.h>
#include <string.h>

void main()
{
    char hex[20];
    int dec = 0, base = 1, len, value;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    for(int i=len-1; i>=0; i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
            value = hex[i] - 48;
        else
            value = hex[i] - 55;

        dec += value * base;
        base *= 16;
    }

    int oct[20], i=0;
    while(dec>0)
    {
        oct[i++] = dec%8;
        dec/=8;
    }

    printf("Octal = ");
    for(int j=i-1;j>=0;j--)
        printf("%d",oct[j]);

}