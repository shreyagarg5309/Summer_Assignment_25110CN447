#include<stdio.h>

int isPrime(int n);

int main(){

    int num, largest, result;

    printf("Enter the no: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if(num % i == 0){
            result = isPrime(i);

            if(result != 0){
                largest = result;
            }
        }
    }

    printf("The largest prime factor of %d is: %d", num, largest);

    return 0;
}

int isPrime(int n){
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        return n;
    }

    return 0;
}