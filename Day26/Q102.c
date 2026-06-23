#include<stdio.h>

int main(){

    int age;

    printf("Enter the age: ");
    scanf("%d", &age);

    if(age < 0 || age > 100){
        printf("Invalid age");
    }
    else if(age >= 18){
        printf("Congratulations! You are eligible to vote");
    }
    else{
        printf("You are not eligible to vote");
    }

    return 0;
}