//find logest word
#include <stdio.h>

int main() {
    char str[100];
    int currentLen = 0, maxLen = 0, maxStart = 0;

    printf("Enter the string: ");
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != '\n'){
            currentLen++;
        }
        else if(str[i] == ' ' || str[i] == '\n'){
            if(currentLen > maxLen){
                maxLen = currentLen;
                maxStart = i - currentLen;
            }
            currentLen = 0;
        }
        i++;
    }

    if(currentLen > maxLen) {
        maxLen = currentLen;
        maxStart = i - currentLen;
    }

    printf("The longest word is: ");
    for(int i = maxStart; i < maxStart + maxLen; i++){
        printf("%c", str[i]);
    }
    
    return 0;
}
