//character pyramid
#include<stdio.h>

int main(){

    char letter;

    printf("Enter the last character of pattern: ");
    scanf("%c", &letter);

    for(char i = 'A'; i <= letter; i++){
        for(int j = 1; j <= letter - i; j++){
            printf("  ");
        }

        for(char k = 'A'; k <= i; k++){
            printf("%c ", k);
        }

        for(char l = i - 1; l >= 'A'; l--){
            printf("%c ", l);
        }
        
        printf("\n");
    }

    return 0;
}
