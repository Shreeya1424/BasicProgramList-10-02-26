// C program to convert decimal to hexadecimal

#include <stdio.h>

void main()
{
    int dec, rem, i=0;
    char hex[20];

    printf("Enter decimal number: ");
    scanf("%d",&dec);

    while(dec>0)
    {
        rem=dec%16;

        if(rem<10)
            hex[i]=rem+48;
        else
            hex[i]=rem+55;

        i++;
        dec/=16;
    }

    printf("Hexadecimal = ");
    for(int j=i-1;j>=0;j--)
        printf("%c",hex[j]);

}

// C program to convert hexadecimal to decimal

#include <stdio.h>
#include <string.h>

void main()
{
    char hex[20];
    int dec=0, base=1, value, len;

    printf("Enter hexadecimal number: ");
    scanf("%s",hex);

    len=strlen(hex);

    for(int i=len-1;i>=0;i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
            value=hex[i]-48;
        else
            value=hex[i]-55;

        dec+=value*base;
        base*=16;
    }

    printf("Decimal = %d",dec);
}