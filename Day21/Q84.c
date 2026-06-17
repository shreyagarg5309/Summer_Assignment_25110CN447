//convert lower to upper case
#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int len;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }

    printf("The string with upper case letters: %s", str);

    return 0;
}