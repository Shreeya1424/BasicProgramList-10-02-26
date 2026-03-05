//ODD OR EVEN NUMBER WITH OUT USING % OPERATOR
#include <stdio.h>

void main(){
    int n;

    printf("Enter A Value Of N : ");
    scanf("%d", &n);

    if((n / 2) * 2 == n){
        printf("%d Is An Even Number", n);
    }
    else{
        printf("%d Is An Odd Number", n);
    }
}