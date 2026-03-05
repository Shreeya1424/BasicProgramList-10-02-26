// C program to convert decimal to octal

#include <stdio.h>

void main()
{
    int dec, oct[20], i=0;

    printf("Enter decimal number: ");
    scanf("%d",&dec);

    while(dec>0)
    {
        oct[i++] = dec%8;
        dec/=8;
    }

    printf("Octal = ");
    for(int j=i-1;j>=0;j--)
        printf("%d",oct[j]);

}

// C program to convert octal to decimal

#include <stdio.h>

void main()
{
    int oct, dec=0, base=1, rem;

    printf("Enter octal number: ");
    scanf("%d",&oct);

    while(oct>0)
    {
        rem=oct%10;
        dec+=rem*base;
        base*=8;
        oct/=10;
    }

    printf("Decimal = %d",dec);
}