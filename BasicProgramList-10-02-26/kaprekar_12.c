#include<stdio.h>

void main(){
    int n, div = 1, count = 0, sq, sum, temp;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    for(int i = 0; i < count; i++){
        div *= 10;
    }

    sum = (sq / div) + (sq % div);

    if( sum == n){
        printf("%d Is A Kaprekar Number", n);
    }
    else{
        printf("%d Is Not A Kaprekar Number", n);
    }
}