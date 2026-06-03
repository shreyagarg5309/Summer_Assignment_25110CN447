//recursive sum of digits
#include<stdio.h>

int sumOfDigits(int n);

int main(){
    
    int num, result;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = sumOfDigits(num);

    printf("The sum of digits of entered no is: %d", result);

    return 0;
}

int sumOfDigits(int n){
    int sum = 0, remain;

    if(n == 0){
        return 0;
    }
    else if (n < 0){
        return sumOfDigits(n * -1);
    }
    else{
        return (n % 10) + sumOfDigits(n / 10);
    }
}
