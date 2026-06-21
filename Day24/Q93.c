#include <stdio.h>
#include<string.h>

int main() {
    char str[100], checkStr[100], tempStr[200];
    int len, checkLen, tempLen, match;

    printf("Enter the 1st string: ");
    gets(str);
    printf("Enter the 2nd string: ");
    gets(checkStr);
    len = strlen(str);
    checkLen = strlen(checkStr);
    
    if(len != checkLen){
        printf("String is not rotated");
        return 0;
    }

    strcpy(tempStr, str);
    strcat(tempStr, str);
    tempLen = strlen(tempStr);

    for (int i = 0; i <= tempLen - checkLen; i++){
        match = 1;
        for(int j = 0; j < checkLen; j++){
            if(tempStr[i+j] != checkStr[j]){
                match = 0;
                break;
            }
        }
        if(match == 1){
            printf("String is rotated");
            return 0;
        }
    }

    printf("String is not rotated");
    
    return 0;
}