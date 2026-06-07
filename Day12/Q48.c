//function to check perfect no
#include<stdio.h>

int isPerfect(int a);

int main(){

    int result, num;

    printf("Enter the no: ");
    scanf("%d", &num);

    result = isPerfect(num);

    if(result == num){
        printf("%d is perfect number", num);
    }
    else{
        printf("%d is not perfect number", num);
    }

    return 0;
}

int isPerfect(int a){

    int sum = 0;

    for(int i = 1; i < a; i++){
        if(a % i == 0){
            sum += i;
        }
    }
    
    return sum;
}