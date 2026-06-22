#include<stdio.h>
#include<string.h>

int main(){

    int n, m;

    printf("Enter the max no of letters in a word: ");
    scanf("%d", &m);
    printf("Enter the no of words: ");
    scanf("%d", &n);

    char words[n][m + 1], temp[m + 1];

    printf("ENTER THE WORDS:\n");
    for(int i = 0; i < n; i++){
        scanf("%s", words[i]);   
    }
    printf("\n");

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(strlen(words[j]) > strlen(words[j+1])){
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    printf("WORDS SORTED BY LENGTH:\n");
    for(int i = 0; i < n; i++){
        printf("%s ", words[i]);
    }

    return 0;
}