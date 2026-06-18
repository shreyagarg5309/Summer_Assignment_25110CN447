//count words
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int len, words = 0;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0'){
            words++;
        }
    }

    printf("Words: %d\n", words);

    return 0;
}