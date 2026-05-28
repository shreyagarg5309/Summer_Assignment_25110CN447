#include<stdio.h>

int main(){

    int num, sum = 0;

    printf("Enter the no: ");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        sum = sum + i;
    }

    printf("The sum of N natural nos: %d", sum);

    return 0;
}