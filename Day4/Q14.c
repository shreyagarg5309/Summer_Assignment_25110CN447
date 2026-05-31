//print nth term of fibonacci series
#include<stdio.h>

int main(){

    int term1 = 1, term2 = 1, nextTerm, n;

    printf("Enter the no of terms: ");
    scanf("%d", &n);

    for(int i = 3; i <= n; i++){
        nextTerm = term1 + term2;
        term2 = term1;
        term1 = nextTerm;
    }

    printf("The nth term of Fibonacci series is: %d", nextTerm);

    return 0;
}
