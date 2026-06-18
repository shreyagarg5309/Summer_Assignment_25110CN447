//remove spaces
#include<stdio.h>
#include<string.h>

int main(){

    char str[100], resultStr[100];
    int len, j = 0;

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] != ' ' || str[i] != '\t'){
            resultStr[j] = str[i];
            j++;
        }
    }
    resultStr[j] = '\0';

    printf("Resultant string: %s\n", resultStr);

    return 0;
}