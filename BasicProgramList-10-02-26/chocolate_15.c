#include<stdio.h>

void main(){
    int n = 15, m = 1, k = 3, total_chocolate = 0, wraps = 0, new_chocolate = 0, remaining_wraps = 0;

    total_chocolate = n / m;
    wraps = total_chocolate;

    while(wraps >= k){
        new_chocolate = wraps / k;
        total_chocolate += new_chocolate;
        remaining_wraps = wraps % k;
        wraps = new_chocolate + remaining_wraps;
    }
    printf("Total Chocolate : %d", total_chocolate);
}