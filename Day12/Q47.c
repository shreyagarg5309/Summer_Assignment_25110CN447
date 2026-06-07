//function to find fibonacci
#include<stdio.h>

int fibonacci(int a);

int main(){

    int result, num;

    printf("Enter the no of term: ");
    scanf("%d", &num);

    result = fibonacci(num);

    printf("The nth term of the fibonacci series is: %d", result);

    return 0;
}

int fibonacci(int a){

    int term1 = 0, term2 = 1, nextTerm;

    for(int i = 1; i <= a; i++){
        nextTerm = term1 + term2;
        term2 = term1;
        term1 = nextTerm;
    }
    
    return nextTerm;
}