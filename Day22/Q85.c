//check palindrome string
#include<stdio.h>
#include<string.h>

int main(){

    char str[100], revStr[100];
    int len, found = 1;

    printf("Enter the string: ");
    scanf("%s", str);
    len = strlen(str);

    int i = len - 1;
    int j = 0;

    while(i >= 0){
        revStr[j] = str[i];
        i--;
        j++;
    }
    revStr[j] = '\0';
    
    for(int i = 0; i < len; i++){
        if(revStr[i] != str[i]){
            found = 0;
            break;
        }
    }

    if(found == 1){
        printf("The entered string is palindrome");
    }
    else{
        printf("The entered string is not palindrome");
    }

    return 0;
}