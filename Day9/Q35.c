//repeated character pattern
#include<stdio.h>

int main(){

    char letter;

    printf("Enter the last letter of rows: ");
    scanf("%c", &letter);

    for(char i = 'A'; i <= letter; i++){
        for(char j = 'A'; j <= i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}
