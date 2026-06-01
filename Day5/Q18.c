//check strong number
#include<stdio.h>

int factorial(int n);

int main(){

    int num, originalNum, remain, sum = 0;

    printf("Enter the no: ");
    scanf("%d", &num);

    originalNum = num;
    while(num != 0){
        remain = num % 10;
        sum = sum + factorial(remain);
        num = num / 10; 
    }

    if(sum == originalNum){
        printf("%d is a strong number", originalNum);
    }
    else{
        printf("%d is not a strong number", originalNum);
    }

    return 0;
}

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}
