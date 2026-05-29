//reverse a number
#include<stdio.h>

int main(){
    int num, reverse = 0, remain;

    printf("Enter the number:");
    scanf("%d", &num);

    while(num != 0){
        remain = num % 10;
        reverse = reverse * 10 + remain;
        num = num / 10;
    }

    printf("The reverse of the no is: %d", reverse);

    return 0;
}