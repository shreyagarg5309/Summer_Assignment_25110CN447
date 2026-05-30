//find GCD
#include<stdio.h>

int main(){

    int smallNum, largeNum, gcd;

    printf("Enter the smaller no: ");
    scanf("%d", &smallNum);

    printf("Enter the larger no: ");
    scanf("%d", &largeNum);
    
    for(int i = 1; i <= smallNum; i++){
        if(smallNum % i == 0 && largeNum % i == 0){
            gcd = i;
        }        
    }

    printf("The GCD of %d and %d is: %d", smallNum, largeNum, gcd);

    return 0;
}