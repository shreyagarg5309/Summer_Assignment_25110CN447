//function to check armstrong
#include<stdio.h>
#include<math.h>

int isArmstrong(int a);

int main(){

    int result, num;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = isArmstrong(num);

    if(result == num){
        printf("%d is an armstrong number", num);
    }
    else{
        printf("%d is not armstrong number", num);
    }

    return 0;
}

int isArmstrong(int a){

    int count = 0, remain, num, num1, sum = 0;

    num = a;
    while(a != 0){
        a = a / 10;
        count++;
    }

    num1 = num;
    while(num != 0){
        remain = num % 10;
        sum = sum + pow(remain, count);
        num = num / 10;
    }
    
    return sum;
}