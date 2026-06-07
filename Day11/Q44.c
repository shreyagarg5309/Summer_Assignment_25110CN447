//function to find factorial
#include<stdio.h>

int factorial(int a);

int main(){

    int result, num;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("The factorial of entered no is: %d", result);

    return 0;
}

int factorial(int a){

    int fact = 1, remain;

    while(a != 0){
        fact *= a;
        a--;
    }
    
    return fact;
}