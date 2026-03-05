#include<stdio.h>

int main()
{
    int start, end;
    int i, j, prime;

    printf("Enter Starting Value : ");
    scanf("%d", &start);

    printf("Enter Ending Value : ");
    scanf("%d", &end);

    printf("Prime Numbers are:\n");

    for(i = start; i <= end; i++)
    {
        if(i <= 1)
            continue;        

        prime = 1;           
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)   
            {
                prime = 0;   
                break;
            }
        }

        if(prime == 1)
            printf("%d ", i);
    }

    return 0;
}