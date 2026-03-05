// WITHOUT USING POWER FUNCTION AND MULTIPLICATION OPERATOR
#include <stdio.h>

void main() {
    int a, b, i, j, result = 1, temp=0;

    printf("Enter the value of  a: ");
    scanf("%d", &a);
    printf("Enter the value of  b: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Answer is: 1");
        return;
    }

    for(i = 1; i <= b; i++){
        temp = 0;

        for(j = 1; j <= a; j++){
            temp += result;
        }
        result = temp;
    }
    printf("Answer is: %d", result);
}