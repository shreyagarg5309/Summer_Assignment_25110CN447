//count set bits in a no
#include<stdio.h>

int main(){
    
    int num, remain, sum = 0, contribution = 1, remain1, count = 0;

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

    while(sum != 0){
        remain1 = sum % 10;
        if(remain1 == 1){
            count++;
        }
        sum = sum / 10;
    }

    printf("Number of set bits are: %d", count);

    return 0;
}
