//count vowels and consonants
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int len, vowels = 0, consonants = 0;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i]== 'U'){
            vowels++;
        }
        if((str[i] > 'a' && str[i] <= 'z') || (str[i] > 'A' && str[i] <= 'Z')){
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}