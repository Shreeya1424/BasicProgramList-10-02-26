// ITERATIVE APPROACH TO CALCULATE FACTORIAL OF A NUMBER
#include<stdio.h>

void main(){
    int n, i;
    int factorial = 1;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        factorial *= i;
    }
    printf("Factorial Of %d Is : %d", n, factorial);
}

//RECURSIVE APPROACH TO CALCULATE FACTORIAL OF A NUMBER

#include<stdio.h>

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } 
    else{
        return n * factorial(n - 1);
    }
}

void main(){
    int n, result;

    if(n < 0){
        printf("Factorial Is Not Possible .....");
    }
    else{
        result = factorial(n);
        printf("Factorial Of %d Is : %d", n, result);
    }
}