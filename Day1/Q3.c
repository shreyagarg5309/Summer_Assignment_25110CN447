//Factorial
#include<stdio.h>

int main(){

    int num, factorial = 1;

    printf("Enter the no: ");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        factorial = factorial * i;
    }

    printf("The factorial of given no is: %d", factorial);

    return 0;
}
