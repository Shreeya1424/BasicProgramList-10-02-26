#include <stdio.h>

void main()
{
    int num, digit, rev = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    printf("BCD equivalent: ");

    while(rev > 0)
    {
        digit = rev % 10;

        if(digit == 0) printf("0000 ");
        else if(digit == 1) printf("0001 ");
        else if(digit == 2) printf("0010 ");
        else if(digit == 3) printf("0011 ");
        else if(digit == 4) printf("0100 ");
        else if(digit == 5) printf("0101 ");
        else if(digit == 6) printf("0110 ");
        else if(digit == 7) printf("0111 ");
        else if(digit == 8) printf("1000 ");
        else if(digit == 9) printf("1001 ");

        rev = rev / 10;
    }

}