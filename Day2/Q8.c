//reverse a number
#include<stdio.h>

int main(){
    
    int num, num1, reverse = 0, remain;

    printf("Enter the number:");
    scanf("%d", &num);
    
    num1 = num;
    while(num != 0){
        remain = num % 10;
        reverse = reverse * 10 + remain;
        num = num / 10;
    }

    if(num1 == reverse){
        printf("The entered number %d is a palindrome.", num1);
    }
    else{
        printf("The entered number %d is not a palindrome.", num1);
    }

    return 0;
}
