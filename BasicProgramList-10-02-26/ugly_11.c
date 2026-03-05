#include<stdio.h>

void main(){
    int n;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    if (n <= 0){
        printf("Number is not an ugly number");
    }

    int flag = 0;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            n /= 3;
        }
        else if (n % 5 == 0)
        {
            n /= 5;
        }
        else{
            flag = 1;
            break;
        }    
    }
    if (flag == 0){
        printf("Number is an ugly number");
    }
    else{
        printf("Number is not an ugly number");
    }
}