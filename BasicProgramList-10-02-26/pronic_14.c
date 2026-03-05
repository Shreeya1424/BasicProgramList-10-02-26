#include<stdio.h>

void main(){
    int n, flag = 0;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        if(i * (i + 1) == n){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        printf("%d Is A Pronic Number", n);
    }
    else{
        printf("%d Is Not A Pronic Number", n);
    }
}