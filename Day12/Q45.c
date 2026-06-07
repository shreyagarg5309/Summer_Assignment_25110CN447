//function to check palindrome
#include<stdio.h>

int isPalindrome(int a);

int main(){

    int result, num;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = isPalindrome(num);

    if(result == num){
        printf("%d is a palindrome", num);
    }
    else{
        printf("%d is not palindrome", num);
    }

    return 0;
}

int isPalindrome(int a){

    int rev = 0, remain;

    while(a != 0){
        remain = a % 10;
        rev = remain + (rev * 10);
        a = a / 10;
    }
    
    return rev;
}