#include<stdio.h>

int main(){

    int term1 = 1, term2 = 1, nextTerm, n;

    printf("Enter the no of terms: ");
    scanf("%d", &n);

    printf("FIBONACCI SERIES\n");
    printf("%d\n", term1);
    printf("%d\n", term2);

    for(int i = 3; i <= n; i++){
        nextTerm = term1 + term2;
        printf("%d\n", nextTerm);
        term2 = term1;
        term1 = nextTerm;
    }

    return 0;
}