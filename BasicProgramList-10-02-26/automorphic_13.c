#include<stdio.h>

void main(){
    int n, div = 1, count = 0, sq, ls, temp;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    temp = n;;
    sq = n * n;

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    for(int i = 0; i < count; i++){
        div *= 10;
    }
    ls = sq % div;

    if(ls == n){
        printf("%d Is An Automorphic Number", n);
    }
    else{
        printf("%d Is Not An Automorphic Number", n);
    }
}