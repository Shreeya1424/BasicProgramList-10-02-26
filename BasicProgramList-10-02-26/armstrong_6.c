#include<stdio.h>
void main(){

         int n, rem = 0;
		 
		 int sum = 0;

         printf("Enter A Value Of N : ");
         scanf("%d", &n);

         int temp = n;

        while(temp != 0)
    {
        rem = temp % 10;            
        sum = sum + rem*rem*rem;    
        temp = temp / 10;           
    }

    if(sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
}