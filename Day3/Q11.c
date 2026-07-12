//find GCD
#include<stdio.h>

int main(){

    int firstlNum, secondNum, gcd, largeNum,smallNum;

    printf("Enter the smaller no: ");
    scanf("%d", &firstNum);

    printf("Enter the larger no: ");
    scanf("%d", &secondNum);

    if(firstNum > secondNum){
        largeNum = firstNum;
        smallNum = secondNum;
    }
    else{
        largeNum = secondNum;
        smallNum = firstNum;
    }
    
    for(int i = 1; i <= smallNum; i++){
        if(smallNum % i == 0 && largeNum % i == 0){
            gcd = i;
        }        
    }

    printf("The GCD of %d and %d is: %d", smallNum, largeNum, gcd);

    return 0;
}
