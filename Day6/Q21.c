#include<stdio.h>

int main(){
    
    int num, remain, sum = 0, contribution = 1;

    printf("Enter the no: ");
    scanf("%d", &num);

    while(num != 0){
        remain = num % 2;
        if(remain == 1){
            sum = sum + contribution;
        }

        num = num / 2;
        contribution = contribution * 10;
    }

    printf("The converted binary no is: %d", sum);

    return 0;
}