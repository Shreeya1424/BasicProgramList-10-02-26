// WITHOUT USING DIVISION OR MODULUS OPERATOR

#include <stdio.h>

void main() {
    int num1, num2;
    int big, small;
    int quotient = 0;
    int remainder;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        big = num1;
        small = num2;
    } else {
        big = num2;
        small = num1;
    }
    remainder = big;

    while (remainder >= small)
    {
        remainder = remainder - small;
        quotient++;
    }
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
}