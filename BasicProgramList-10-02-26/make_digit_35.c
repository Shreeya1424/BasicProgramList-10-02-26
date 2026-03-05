#include <stdio.h>

void main()
{
    int num;
    int digits[10];
    int i = 0, j, temp, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    int negative = 0;

    if(num < 0)
    {
        negative = 1;
        num = -num;
    }

    while(num > 0)
    {
        digits[count] = num % 10;
        num = num / 10;
        count++;
    }

    for(i = 0; i < count-1; i++)
    {
        for(j = i+1; j < count; j++)
        {
            if(digits[i] > digits[j])
            {
                temp = digits[i];
                digits[i] = digits[j];
                digits[j] = temp;
            }
        }
    }

    if(digits[0] == 0)
    {
        for(i = 1; i < count; i++)
        {
            if(digits[i] != 0)
            {
                temp = digits[0];
                digits[0] = digits[i];
                digits[i] = temp;
                break;
            }
        }
    }

    int result = 0;
    for(i = 0; i < count; i++)
    {
        result = result * 10 + digits[i];
    }

    if(negative)
        result = -result;

    printf("Minimum number = %d", result);

}