//function to find maximum
#include<stdio.h>

int findMax(int a, int b);

int main(){

    int result, firstNum, secondNum;

    printf("Enter the first no: ");
    scanf("%d", &firstNum);

    printf("Enter the second no: ");
    scanf("%d", &secondNum);

    result = findMax(firstNum, secondNum);

    printf("The maximum of entered no is: %d", result);

    return 0;
}

int findMax(int a, int b){

    int max;

    if(a < b){
        max = b;
    }
    else{
        max = a;
    }

    return max;
}