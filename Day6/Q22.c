#include<stdio.h>

int main(){
    
    int num, remain, sum = 0, contribution = 1;

    printf("Enter the no: ");
    scanf("%d", &num);

    while(num != 0){
        remain = num % 10;
        if(remain == 1){
            sum = sum + contribution;
        }

        num = num / 10;
        contribution = contribution * 2;
    }

    printf("The converted decimal no is: %d", sum);

    return 0;
}