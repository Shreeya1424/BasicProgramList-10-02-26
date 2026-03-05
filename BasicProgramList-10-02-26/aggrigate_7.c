#include<stdio.h>

void main(){
    int n, i;
    float num, sum = 0, avg;
    float max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers: ");
    scanf("%f", &num);
    max = num;
    min = num;
    sum = num;

    for (i = 2; i<=n; i++){
        printf("Enter numbers: ", i);
        scanf("%f", &num);

        sum += num;

        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }

    }
     
    avg = sum / n;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", avg);     
    printf("Maximum: %.2f\n", max);
    printf("Minimum: %.2f\n", min);

}
