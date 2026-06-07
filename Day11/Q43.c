//function to check prime
#include<stdio.h>

int isPrime(int a);

int main(){

    int result, num;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = isPrime(num);

    if(result == 2){
        printf("%d is prime no", num);
    }
    else{
        printf("%d is not prime no", num);
    }

    return 0;
}

int isPrime(int a){

    int count = 0;

    for(int i = 1; i <= a; i++){
        if(a % i == 0){
            count++;
        }
    }
    
    return count;
}