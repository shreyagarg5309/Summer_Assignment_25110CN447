//reverse string
#include<stdio.h>
#include<string.h>

int main(){

    char str[100], revStr[100];
    int len;

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

    printf("Reversed string is: %s", revStr);

    return 0;
}