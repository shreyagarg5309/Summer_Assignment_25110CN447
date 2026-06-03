//recursive factorial
#include<stdio.h>

int factorial(int n);

int main(){
    
    int num, result;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("The factorial of entered no is: %d", result);

    return 0;
}

int factorial(int n){
    int fact = 1;

    if(n == 1 || n == 0){
        fact = 1;
    }
    else if (n < 0){
        return 1;
    }
    else{
        fact = n * factorial(n - 1);
    }

    return fact;
}
