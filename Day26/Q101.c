#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    int num = (rand() % 100) + 1;
    int guess, attempt = 0;

    while(guess != num){
        printf("Enter the guess: ");
        scanf("%d", &guess);
        attempt++;

        if(guess > num){
            printf("Target no is smaller\n");
        }
        else if(guess < num){
            printf("Target no is larger\n");
        }
        else{
            printf("Correct! You got it right in %d attempts\n", attempt);
        }
    }

    return 0;
}