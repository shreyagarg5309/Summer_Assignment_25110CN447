//find sum of digits
#include<stdio.h>

int main(){
    int num, sum = 0, remain;

    printf("Enter the number:");
    scanf("%d", &num);

    while(num != 0){
        remain = num % 10;
        sum += remain;
        num = num/10;
    }

    printf("The sum of digits of the no is: %d", sum);

    return 0;
}