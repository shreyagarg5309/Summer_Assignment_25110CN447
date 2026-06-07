//function od sum
#include<stdio.h>

int sum(int a, int b);

int main(){

    int result, firstNum, secondNum;

    printf("Enter the first no: ");
    scanf("%d", &firstNum);

    printf("Enter the second no: ");
    scanf("%d", &secondNum);

    result = sum(firstNum, secondNum);

    printf("The sum of entered no is: %d", result);

    return 0;
}

int sum(int a, int b){

    int sum;

    sum = a + b;
    
    return sum;
}