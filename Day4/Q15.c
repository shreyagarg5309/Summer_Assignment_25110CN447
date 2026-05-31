//check wheather the entered no is armstrong or not
#include<stdio.h>
#include<math.h>

int main(){

    int num, num1, num2, count = 0, remain, sum = 0;

    printf("Enter the no: ");
    scanf("%d", &num);

    num1 = num;
    while(num != 0){
        num = num/10;
        count++;
    }

    num2 = num1;
    while(num1 != 0){
        remain = num1 % 10;
        sum = sum + pow(remain, count);
        num1 = num1 / 10;
    }

    if(sum == num2){
        printf("%d is armstrong number", num2);
    }
    else{
        printf("%d is not armstrong number", num2);
    }
    
    return 0;
}