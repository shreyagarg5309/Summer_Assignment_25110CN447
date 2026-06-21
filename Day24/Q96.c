#include <stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100];
    int len, flag;

    printf("Enter the string: ");
    gets(str1);
    len = strlen(str1);

    int j = 0;
    for(int i = 0; i < len; i++){
        flag = 0;
        for(int k = 0; k < j; k++){
            if(str1[i] == str2[k]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            str2[j++] = str1[i];
        }
    }
    str2[j] = '\0';

    printf("The resultant string is: %s", str2);
    
    return 0;
}