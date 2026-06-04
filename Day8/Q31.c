#include<stdio.h>

int main(){

    char letter;

    printf("Enter the last letter to be printed: ");
    scanf("%c", &letter);

    for(char i = 'A'; i <= ; i++){
        for(char j = 'A'; j <= i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}