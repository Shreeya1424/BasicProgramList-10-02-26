#include <stdio.h>

void main()
{
    int a, b;
    int x;
    int count = 0;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    x = a ^ b;

    while(x > 0)
    {
        if(x % 2 == 1)   
        {
            count++;
        }

        x = x / 2;       
    }

    printf("Distance between numbers = %d", count);

}