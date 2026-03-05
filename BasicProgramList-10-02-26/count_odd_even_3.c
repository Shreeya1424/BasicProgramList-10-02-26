#include<stdio.h>

void main(){
    int n, countOdd = 0, countEven = 0, temp;

    printf("Enter A Value Of N : ");                
    scanf("%d", &n);

    if (n < 0){
        n = -n;
    }
    while (n != 0)
    {
        temp = n % 10;

        if (temp % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
        n = n / 10;
    }

    printf("Count Of Odd Digits Is : %d\n", countOdd);
    printf("Count Of Even Digits Is : %d", countEven);
    
}