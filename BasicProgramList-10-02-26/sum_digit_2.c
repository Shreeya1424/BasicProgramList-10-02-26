// ITRATIVE APPROACH TO CALCULATE SUM OF DIGITS OF A NUMBER
#include <stdio.h>

void main(){
    int n, sum = 0, temp;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    while(n != 0){
        temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }
    printf("Sum Of Digits Is : %d", sum);
}

// RECURSIVE APPROACH TO CALCULATE SUM OF DIGITS OF A NUMBER
#include <stdio.h>

int sumOfDigit(int n){
    if (n == 0){
        return 0;
    }
    else{
        return (n % 10) + sumOfDigit(n / 10);
    }
}


void main(){
    int n, result;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);    

    result = sumOfDigit(n);
    printf("Sum Of Digits Is : %d", result);    
}