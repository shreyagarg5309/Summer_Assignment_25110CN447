//find product of digits of number
#include<stdio.h>

int main(){
    int num, product = 1, remain;

    printf("Enter the number:");
    scanf("%d", &num);

    while(num != 0){
        remain = num % 10;
        product = product * remain;
        num = num / 10;
    }

    printf("The product of digits of the no is: %d", product);

    return 0;
}